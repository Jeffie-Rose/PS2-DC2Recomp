#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyDataFish__13CGameDataUsedFi
// Address: 0x199d40 - 0x199ec4
void CopyDataFish__13CGameDataUsedFi_0x199d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyDataFish__13CGameDataUsedFi_0x199d40");
#endif

    switch (ctx->pc) {
        case 0x199d68u: goto label_199d68;
        case 0x199d8cu: goto label_199d8c;
        case 0x199d98u: goto label_199d98;
        case 0x199da8u: goto label_199da8;
        case 0x199db8u: goto label_199db8;
        case 0x199de0u: goto label_199de0;
        case 0x199de8u: goto label_199de8;
        case 0x199dfcu: goto label_199dfc;
        case 0x199e14u: goto label_199e14;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e28u: goto label_199e28;
        case 0x199e34u: goto label_199e34;
        case 0x199e40u: goto label_199e40;
        case 0x199e80u: goto label_199e80;
        case 0x199e9cu: goto label_199e9c;
        default: break;
    }

    ctx->pc = 0x199d40u;

    // 0x199d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199d48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x199d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x199d4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x199d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x199d50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d60: 0xc065718  jal         func_195C60
    ctx->pc = 0x199D60u;
    SET_GPR_U32(ctx, 31, 0x199D68u);
    ctx->pc = 0x199D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D60u;
            // 0x199d64: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C60u;
    if (runtime->hasFunction(0x195C60u)) {
        auto targetFn = runtime->lookupFunction(0x195C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D68u; }
        if (ctx->pc != 0x199D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBreedFishInfoData__Fi_0x195c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D68u; }
        if (ctx->pc != 0x199D68u) { return; }
    }
    ctx->pc = 0x199D68u;
label_199d68:
    // 0x199d68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d6c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199D6Cu;
    {
        const bool branch_taken_0x199d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D6Cu;
            // 0x199d70: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d6c) {
            ctx->pc = 0x199D7Cu;
            goto label_199d7c;
        }
    }
    ctx->pc = 0x199D74u;
    // 0x199d74: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x199D74u;
    {
        const bool branch_taken_0x199d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D74u;
            // 0x199d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d74) {
            ctx->pc = 0x199EA8u;
            goto label_199ea8;
        }
    }
    ctx->pc = 0x199D7Cu;
label_199d7c:
    // 0x199d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d80: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x199d80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x199d84: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x199D84u;
    SET_GPR_U32(ctx, 31, 0x199D8Cu);
    ctx->pc = 0x199D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D84u;
            // 0x199d88: 0xa6320002  sh          $s2, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D8Cu; }
        if (ctx->pc != 0x199D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D8Cu; }
        if (ctx->pc != 0x199D8Cu) { return; }
    }
    ctx->pc = 0x199D8Cu;
label_199d8c:
    // 0x199d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d90: 0xc065810  jal         func_196040
    ctx->pc = 0x199D90u;
    SET_GPR_U32(ctx, 31, 0x199D98u);
    ctx->pc = 0x199D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D90u;
            // 0x199d94: 0xa2220004  sb          $v0, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D98u; }
        if (ctx->pc != 0x199D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D98u; }
        if (ctx->pc != 0x199D98u) { return; }
    }
    ctx->pc = 0x199D98u;
label_199d98:
    // 0x199d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D98u;
            // 0x199d9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DA8u;
            goto label_199da8;
        }
    }
    ctx->pc = 0x199DA0u;
    // 0x199da0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x199DA0u;
    SET_GPR_U32(ctx, 31, 0x199DA8u);
    ctx->pc = 0x199DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DA0u;
            // 0x199da4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DA8u; }
        if (ctx->pc != 0x199DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DA8u; }
        if (ctx->pc != 0x199DA8u) { return; }
    }
    ctx->pc = 0x199DA8u;
label_199da8:
    // 0x199da8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x199dac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199db0: 0xc0941c0  jal         func_250700
    ctx->pc = 0x199DB0u;
    SET_GPR_U32(ctx, 31, 0x199DB8u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DB8u; }
        if (ctx->pc != 0x199DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DB8u; }
        if (ctx->pc != 0x199DB8u) { return; }
    }
    ctx->pc = 0x199DB8u;
label_199db8:
    // 0x199db8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x199db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199dbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x199dc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199dc4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x199dc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199dcc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x199dccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x199dd0: 0x0  nop
    ctx->pc = 0x199dd0u;
    // NOP
    // 0x199dd4: 0x0  nop
    ctx->pc = 0x199dd4u;
    // NOP
    // 0x199dd8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x199DD8u;
    SET_GPR_U32(ctx, 31, 0x199DE0u);
    ctx->pc = 0x199DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DD8u;
            // 0x199ddc: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DE0u; }
        if (ctx->pc != 0x199DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DE0u; }
        if (ctx->pc != 0x199DE0u) { return; }
    }
    ctx->pc = 0x199DE0u;
label_199de0:
    // 0x199de0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x199DE0u;
    SET_GPR_U32(ctx, 31, 0x199DE8u);
    ctx->pc = 0x199DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199DE0u;
            // 0x199de4: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DE8u; }
        if (ctx->pc != 0x199DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DE8u; }
        if (ctx->pc != 0x199DE8u) { return; }
    }
    ctx->pc = 0x199DE8u;
label_199de8:
    // 0x199de8: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x199de8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x199dec: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x199df0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199df4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x199DF4u;
    SET_GPR_U32(ctx, 31, 0x199DFCu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DFCu; }
        if (ctx->pc != 0x199DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199DFCu; }
        if (ctx->pc != 0x199DFCu) { return; }
    }
    ctx->pc = 0x199DFCu;
label_199dfc:
    // 0x199dfc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x199dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x199e00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x199e04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x199e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199e08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199e0c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x199E0Cu;
    SET_GPR_U32(ctx, 31, 0x199E14u);
    ctx->pc = 0x199E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E0Cu;
            // 0x199e10: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E14u; }
        if (ctx->pc != 0x199E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E14u; }
        if (ctx->pc != 0x199E14u) { return; }
    }
    ctx->pc = 0x199E14u;
label_199e14:
    // 0x199e14: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x199E14u;
    SET_GPR_U32(ctx, 31, 0x199E1Cu);
    ctx->pc = 0x199E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E14u;
            // 0x199e18: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E1Cu; }
        if (ctx->pc != 0x199E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E1Cu; }
        if (ctx->pc != 0x199E1Cu) { return; }
    }
    ctx->pc = 0x199E1Cu;
label_199e1c:
    // 0x199e1c: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x199e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e20: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199E20u;
    SET_GPR_U32(ctx, 31, 0x199E28u);
    ctx->pc = 0x199E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E20u;
            // 0x199e24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E28u; }
        if (ctx->pc != 0x199E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E28u; }
        if (ctx->pc != 0x199E28u) { return; }
    }
    ctx->pc = 0x199E28u;
label_199e28:
    // 0x199e28: 0xa2220025  sb          $v0, 0x25($s1)
    ctx->pc = 0x199e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x199e2c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199E2Cu;
    SET_GPR_U32(ctx, 31, 0x199E34u);
    ctx->pc = 0x199E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E2Cu;
            // 0x199e30: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E34u; }
        if (ctx->pc != 0x199E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E34u; }
        if (ctx->pc != 0x199E34u) { return; }
    }
    ctx->pc = 0x199E34u;
label_199e34:
    // 0x199e34: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x199e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x199e38: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199E38u;
    SET_GPR_U32(ctx, 31, 0x199E40u);
    ctx->pc = 0x199E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E38u;
            // 0x199e3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E40u; }
        if (ctx->pc != 0x199E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E40u; }
        if (ctx->pc != 0x199E40u) { return; }
    }
    ctx->pc = 0x199E40u;
label_199e40:
    // 0x199e40: 0xa2220026  sb          $v0, 0x26($s1)
    ctx->pc = 0x199e40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x199e44: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x199e48: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x199e4c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x199e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x199e50: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x199e50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x199e54: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x199e54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x199e58: 0xa622003e  sh          $v0, 0x3E($s1)
    ctx->pc = 0x199e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e5c: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x199e5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x199e60: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x199e60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e64: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x199e64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x199e68: 0xa6220038  sh          $v0, 0x38($s1)
    ctx->pc = 0x199e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e6c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x199e6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x199e70: 0xa622003a  sh          $v0, 0x3A($s1)
    ctx->pc = 0x199e70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e74: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x199e74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x199e78: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199E78u;
    SET_GPR_U32(ctx, 31, 0x199E80u);
    ctx->pc = 0x199E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E78u;
            // 0x199e7c: 0xa622003c  sh          $v0, 0x3C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E80u; }
        if (ctx->pc != 0x199E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E80u; }
        if (ctx->pc != 0x199E80u) { return; }
    }
    ctx->pc = 0x199E80u;
label_199e80:
    // 0x199e80: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x199e84: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199e88: 0xa6220046  sh          $v0, 0x46($s1)
    ctx->pc = 0x199e88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x199e8c: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x199e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x199e90: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x199e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x199e94: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x199E94u;
    SET_GPR_U32(ctx, 31, 0x199E9Cu);
    ctx->pc = 0x199E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E94u;
            // 0x199e98: 0xa6200048  sh          $zero, 0x48($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E9Cu; }
        if (ctx->pc != 0x199E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E9Cu; }
        if (ctx->pc != 0x199E9Cu) { return; }
    }
    ctx->pc = 0x199E9Cu;
label_199e9c:
    // 0x199e9c: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x199e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x199ea0: 0xa220004d  sb          $zero, 0x4D($s1)
    ctx->pc = 0x199ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x199ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199ea8:
    // 0x199ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199eac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x199eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x199eb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x199eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x199EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EBCu;
            // 0x199ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199EC4u;
}
