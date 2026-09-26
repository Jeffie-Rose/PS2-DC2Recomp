#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__13CEventSprite2Fv
// Address: 0x290cc0 - 0x2912e4
void Draw__13CEventSprite2Fv_0x290cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__13CEventSprite2Fv_0x290cc0");
#endif

    switch (ctx->pc) {
        case 0x290d10u: goto label_290d10;
        case 0x290d20u: goto label_290d20;
        case 0x290d3cu: goto label_290d3c;
        case 0x290d48u: goto label_290d48;
        case 0x290d58u: goto label_290d58;
        case 0x290d64u: goto label_290d64;
        case 0x290d70u: goto label_290d70;
        case 0x290d84u: goto label_290d84;
        case 0x290d94u: goto label_290d94;
        case 0x290da0u: goto label_290da0;
        case 0x290dacu: goto label_290dac;
        case 0x290db8u: goto label_290db8;
        case 0x290dc4u: goto label_290dc4;
        case 0x290e08u: goto label_290e08;
        case 0x290e44u: goto label_290e44;
        case 0x290e54u: goto label_290e54;
        case 0x290e68u: goto label_290e68;
        case 0x290e74u: goto label_290e74;
        case 0x290e84u: goto label_290e84;
        case 0x290e90u: goto label_290e90;
        case 0x290ea0u: goto label_290ea0;
        case 0x290eacu: goto label_290eac;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ec8u: goto label_290ec8;
        case 0x290ed8u: goto label_290ed8;
        case 0x290ee4u: goto label_290ee4;
        case 0x290ef4u: goto label_290ef4;
        case 0x290f00u: goto label_290f00;
        case 0x290f10u: goto label_290f10;
        case 0x290f1cu: goto label_290f1c;
        case 0x290f30u: goto label_290f30;
        case 0x290f44u: goto label_290f44;
        case 0x290f50u: goto label_290f50;
        case 0x290f60u: goto label_290f60;
        case 0x290f7cu: goto label_290f7c;
        case 0x290f94u: goto label_290f94;
        case 0x290fb0u: goto label_290fb0;
        case 0x290fc8u: goto label_290fc8;
        case 0x290fe4u: goto label_290fe4;
        case 0x291004u: goto label_291004;
        case 0x291020u: goto label_291020;
        case 0x291030u: goto label_291030;
        case 0x29104cu: goto label_29104c;
        case 0x291068u: goto label_291068;
        case 0x291084u: goto label_291084;
        case 0x2910a0u: goto label_2910a0;
        case 0x2910acu: goto label_2910ac;
        case 0x2910c0u: goto label_2910c0;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910e0u: goto label_2910e0;
        case 0x2910f0u: goto label_2910f0;
        case 0x29110cu: goto label_29110c;
        case 0x29112cu: goto label_29112c;
        case 0x291148u: goto label_291148;
        case 0x291158u: goto label_291158;
        case 0x291174u: goto label_291174;
        case 0x291190u: goto label_291190;
        case 0x29119cu: goto label_29119c;
        case 0x2911acu: goto label_2911ac;
        case 0x2911b8u: goto label_2911b8;
        case 0x2911c4u: goto label_2911c4;
        case 0x2911d0u: goto label_2911d0;
        case 0x2911dcu: goto label_2911dc;
        case 0x291200u: goto label_291200;
        case 0x291210u: goto label_291210;
        case 0x291224u: goto label_291224;
        case 0x291230u: goto label_291230;
        case 0x291240u: goto label_291240;
        case 0x29124cu: goto label_29124c;
        case 0x29126cu: goto label_29126c;
        case 0x291278u: goto label_291278;
        case 0x291288u: goto label_291288;
        case 0x291294u: goto label_291294;
        case 0x2912a0u: goto label_2912a0;
        case 0x2912acu: goto label_2912ac;
        default: break;
    }

    ctx->pc = 0x290cc0u;

    // 0x290cc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x290cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290cc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x290cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x290ccc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x290cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x290cd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x290cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x290cd4: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x290cd8: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x290cd8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x290cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x290cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce0: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x290ce0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x290ce4: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x290ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x290ce8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x290ce8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x290cec: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x290cecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x290cf0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x290cf0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x290cf4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x290cf4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x290cf8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x290cf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x290cfc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x290cfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x290d00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x290d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x290d04: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x290d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x290d08: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x290D08u;
    SET_GPR_U32(ctx, 31, 0x290D10u);
    ctx->pc = 0x290D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D08u;
            // 0x290d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D10u; }
        if (ctx->pc != 0x290D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D10u; }
        if (ctx->pc != 0x290D10u) { return; }
    }
    ctx->pc = 0x290D10u;
label_290d10:
    // 0x290d10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x290d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x290d14: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x290d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x290d18: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x290D18u;
    SET_GPR_U32(ctx, 31, 0x290D20u);
    ctx->pc = 0x290D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D18u;
            // 0x290d1c: 0x24a5d8e8  addiu       $a1, $a1, -0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D20u; }
        if (ctx->pc != 0x290D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D20u; }
        if (ctx->pc != 0x290D20u) { return; }
    }
    ctx->pc = 0x290D20u;
label_290d20:
    // 0x290d20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290D20u;
    {
        const bool branch_taken_0x290d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D20u;
            // 0x290d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d20) {
            ctx->pc = 0x290D30u;
            goto label_290d30;
        }
    }
    ctx->pc = 0x290D28u;
    // 0x290d28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290D28u;
    {
        const bool branch_taken_0x290d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D28u;
            // 0x290d2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d28) {
            ctx->pc = 0x290D40u;
            goto label_290d40;
        }
    }
    ctx->pc = 0x290D30u;
label_290d30:
    // 0x290d30: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x290d34: 0xc04b414  jal         func_12D050
    ctx->pc = 0x290D34u;
    SET_GPR_U32(ctx, 31, 0x290D3Cu);
    ctx->pc = 0x290D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D34u;
            // 0x290d38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D3Cu; }
        if (ctx->pc != 0x290D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D3Cu; }
        if (ctx->pc != 0x290D3Cu) { return; }
    }
    ctx->pc = 0x290D3Cu;
label_290d3c:
    // 0x290d3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290d40:
    // 0x290d40: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x290D40u;
    SET_GPR_U32(ctx, 31, 0x290D48u);
    ctx->pc = 0x290D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D40u;
            // 0x290d44: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D48u; }
        if (ctx->pc != 0x290D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D48u; }
        if (ctx->pc != 0x290D48u) { return; }
    }
    ctx->pc = 0x290D48u;
label_290d48:
    // 0x290d48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d50: 0xc04d104  jal         func_134410
    ctx->pc = 0x290D50u;
    SET_GPR_U32(ctx, 31, 0x290D58u);
    ctx->pc = 0x290D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D50u;
            // 0x290d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D58u; }
        if (ctx->pc != 0x290D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D58u; }
        if (ctx->pc != 0x290D58u) { return; }
    }
    ctx->pc = 0x290D58u;
label_290d58:
    // 0x290d58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d5c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x290D5Cu;
    SET_GPR_U32(ctx, 31, 0x290D64u);
    ctx->pc = 0x290D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D5Cu;
            // 0x290d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D64u; }
        if (ctx->pc != 0x290D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D64u; }
        if (ctx->pc != 0x290D64u) { return; }
    }
    ctx->pc = 0x290D64u;
label_290d64:
    // 0x290d64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d68: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x290D68u;
    SET_GPR_U32(ctx, 31, 0x290D70u);
    ctx->pc = 0x290D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D68u;
            // 0x290d6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D70u; }
        if (ctx->pc != 0x290D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D70u; }
        if (ctx->pc != 0x290D70u) { return; }
    }
    ctx->pc = 0x290D70u;
label_290d70:
    // 0x290d70: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x290D70u;
    {
        const bool branch_taken_0x290d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D70u;
            // 0x290d74: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d70) {
            ctx->pc = 0x290D8Cu;
            goto label_290d8c;
        }
    }
    ctx->pc = 0x290D78u;
    // 0x290d78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290d7c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x290D7Cu;
    SET_GPR_U32(ctx, 31, 0x290D84u);
    ctx->pc = 0x290D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D7Cu;
            // 0x290d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D84u; }
        if (ctx->pc != 0x290D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D84u; }
        if (ctx->pc != 0x290D84u) { return; }
    }
    ctx->pc = 0x290D84u;
label_290d84:
    // 0x290d84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290D84u;
    {
        const bool branch_taken_0x290d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290D84u;
            // 0x290d88: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d84) {
            ctx->pc = 0x290D98u;
            goto label_290d98;
        }
    }
    ctx->pc = 0x290D8Cu;
label_290d8c:
    // 0x290d8c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x290D8Cu;
    SET_GPR_U32(ctx, 31, 0x290D94u);
    ctx->pc = 0x290D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D8Cu;
            // 0x290d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D94u; }
        if (ctx->pc != 0x290D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290D94u; }
        if (ctx->pc != 0x290D94u) { return; }
    }
    ctx->pc = 0x290D94u;
label_290d94:
    // 0x290d94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_290d98:
    // 0x290d98: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x290D98u;
    SET_GPR_U32(ctx, 31, 0x290DA0u);
    ctx->pc = 0x290D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290D98u;
            // 0x290d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DA0u; }
        if (ctx->pc != 0x290DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DA0u; }
        if (ctx->pc != 0x290DA0u) { return; }
    }
    ctx->pc = 0x290DA0u;
label_290da0:
    // 0x290da0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x290da4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x290DA4u;
    SET_GPR_U32(ctx, 31, 0x290DACu);
    ctx->pc = 0x290DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290DA4u;
            // 0x290da8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DACu; }
        if (ctx->pc != 0x290DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DACu; }
        if (ctx->pc != 0x290DACu) { return; }
    }
    ctx->pc = 0x290DACu;
label_290dac:
    // 0x290dac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290db0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x290DB0u;
    SET_GPR_U32(ctx, 31, 0x290DB8u);
    ctx->pc = 0x290DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290DB0u;
            // 0x290db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DB8u; }
        if (ctx->pc != 0x290DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DB8u; }
        if (ctx->pc != 0x290DB8u) { return; }
    }
    ctx->pc = 0x290DB8u;
label_290db8:
    // 0x290db8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290dbc: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x290DBCu;
    SET_GPR_U32(ctx, 31, 0x290DC4u);
    ctx->pc = 0x290DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290DBCu;
            // 0x290dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DC4u; }
        if (ctx->pc != 0x290DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290DC4u; }
        if (ctx->pc != 0x290DC4u) { return; }
    }
    ctx->pc = 0x290DC4u;
label_290dc4:
    // 0x290dc4: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x290dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290dc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290dcc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x290dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290dd4: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x290dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290dd8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x290dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ddc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x290ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x290de0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290de4: 0x46021d02  mul.s       $f20, $f3, $f2
    ctx->pc = 0x290de4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x290de8: 0x106500ee  beq         $v1, $a1, . + 4 + (0xEE << 2)
    ctx->pc = 0x290DE8u;
    {
        const bool branch_taken_0x290de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x290DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DE8u;
            // 0x290dec: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290de8) {
            ctx->pc = 0x2911A4u;
            goto label_2911a4;
        }
    }
    ctx->pc = 0x290DF0u;
    // 0x290df0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290DF0u;
    {
        const bool branch_taken_0x290df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DF0u;
            // 0x290df4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df0) {
            ctx->pc = 0x290E00u;
            goto label_290e00;
        }
    }
    ctx->pc = 0x290DF8u;
    // 0x290df8: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x290DF8u;
    {
        const bool branch_taken_0x290df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290DF8u;
            // 0x290dfc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290df8) {
            ctx->pc = 0x2912ACu;
            goto label_2912ac;
        }
    }
    ctx->pc = 0x290E00u;
label_290e00:
    // 0x290e00: 0xc04d44c  jal         func_135130
    ctx->pc = 0x290E00u;
    SET_GPR_U32(ctx, 31, 0x290E08u);
    ctx->pc = 0x290E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E00u;
            // 0x290e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E08u; }
        if (ctx->pc != 0x290E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E08u; }
        if (ctx->pc != 0x290E08u) { return; }
    }
    ctx->pc = 0x290E08u;
label_290e08:
    // 0x290e08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x290e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x290e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290e10: 0xc6160050  lwc1        $f22, 0x50($s0)
    ctx->pc = 0x290e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x290e14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x290e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290e18: 0x0  nop
    ctx->pc = 0x290e18u;
    // NOP
    // 0x290e1c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x290e1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x290e20: 0x0  nop
    ctx->pc = 0x290e20u;
    // NOP
    // 0x290e24: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x290e24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x290e28: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x290e28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290e2c: 0x0  nop
    ctx->pc = 0x290e2cu;
    // NOP
    // 0x290e30: 0x0  nop
    ctx->pc = 0x290e30u;
    // NOP
    // 0x290e34: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x290E34u;
    {
        const bool branch_taken_0x290e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x290e34) {
            ctx->pc = 0x2910B4u;
            goto label_2910b4;
        }
    }
    ctx->pc = 0x290E3Cu;
    // 0x290e3c: 0xc047964  jal         func_11E590
    ctx->pc = 0x290E3Cu;
    SET_GPR_U32(ctx, 31, 0x290E44u);
    ctx->pc = 0x290E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E3Cu;
            // 0x290e40: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E44u; }
        if (ctx->pc != 0x290E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E44u; }
        if (ctx->pc != 0x290E44u) { return; }
    }
    ctx->pc = 0x290E44u;
label_290e44:
    // 0x290e44: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x290e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x290e48: 0x4600a6c7  neg.s       $f27, $f20
    ctx->pc = 0x290e48u;
    ctx->f[27] = FPU_NEG_S(ctx->f[20]);
    // 0x290e4c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290E4Cu;
    SET_GPR_U32(ctx, 31, 0x290E54u);
    ctx->pc = 0x290E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E4Cu;
            // 0x290e50: 0x4600dd82  mul.s       $f22, $f27, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E54u; }
        if (ctx->pc != 0x290E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E54u; }
        if (ctx->pc != 0x290E54u) { return; }
    }
    ctx->pc = 0x290E54u;
label_290e54:
    // 0x290e54: 0x4600ae47  neg.s       $f25, $f21
    ctx->pc = 0x290e54u;
    ctx->f[25] = FPU_NEG_S(ctx->f[21]);
    // 0x290e58: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x290e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x290e5c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e60: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290E60u;
    SET_GPR_U32(ctx, 31, 0x290E68u);
    ctx->pc = 0x290E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E60u;
            // 0x290e64: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E68u; }
        if (ctx->pc != 0x290E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E68u; }
        if (ctx->pc != 0x290E68u) { return; }
    }
    ctx->pc = 0x290E68u;
label_290e68:
    // 0x290e68: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e6c: 0xc047964  jal         func_11E590
    ctx->pc = 0x290E6Cu;
    SET_GPR_U32(ctx, 31, 0x290E74u);
    ctx->pc = 0x290E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E6Cu;
            // 0x290e70: 0x4600ddc2  mul.s       $f23, $f27, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E74u; }
        if (ctx->pc != 0x290E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E74u; }
        if (ctx->pc != 0x290E74u) { return; }
    }
    ctx->pc = 0x290E74u;
label_290e74:
    // 0x290e74: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x290e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x290e78: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e7c: 0xc047964  jal         func_11E590
    ctx->pc = 0x290E7Cu;
    SET_GPR_U32(ctx, 31, 0x290E84u);
    ctx->pc = 0x290E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E7Cu;
            // 0x290e80: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E84u; }
        if (ctx->pc != 0x290E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E84u; }
        if (ctx->pc != 0x290E84u) { return; }
    }
    ctx->pc = 0x290E84u;
label_290e84:
    // 0x290e84: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e88: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290E88u;
    SET_GPR_U32(ctx, 31, 0x290E90u);
    ctx->pc = 0x290E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E88u;
            // 0x290e8c: 0x4600a602  mul.s       $f24, $f20, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E90u; }
        if (ctx->pc != 0x290E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290E90u; }
        if (ctx->pc != 0x290E90u) { return; }
    }
    ctx->pc = 0x290E90u;
label_290e90:
    // 0x290e90: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x290e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x290e94: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290e98: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290E98u;
    SET_GPR_U32(ctx, 31, 0x290EA0u);
    ctx->pc = 0x290E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290E98u;
            // 0x290e9c: 0x4600c601  sub.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EA0u; }
        if (ctx->pc != 0x290EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EA0u; }
        if (ctx->pc != 0x290EA0u) { return; }
    }
    ctx->pc = 0x290EA0u;
label_290ea0:
    // 0x290ea0: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ea4: 0xc047964  jal         func_11E590
    ctx->pc = 0x290EA4u;
    SET_GPR_U32(ctx, 31, 0x290EACu);
    ctx->pc = 0x290EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EA4u;
            // 0x290ea8: 0x4600a682  mul.s       $f26, $f20, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EACu; }
        if (ctx->pc != 0x290EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EACu; }
        if (ctx->pc != 0x290EACu) { return; }
    }
    ctx->pc = 0x290EACu;
label_290eac:
    // 0x290eac: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x290eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x290eb0: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290eb4: 0xc047964  jal         func_11E590
    ctx->pc = 0x290EB4u;
    SET_GPR_U32(ctx, 31, 0x290EBCu);
    ctx->pc = 0x290EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EB4u;
            // 0x290eb8: 0x4600d640  add.s       $f25, $f26, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EBCu; }
        if (ctx->pc != 0x290EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EBCu; }
        if (ctx->pc != 0x290EBCu) { return; }
    }
    ctx->pc = 0x290EBCu;
label_290ebc:
    // 0x290ebc: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ec0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290EC0u;
    SET_GPR_U32(ctx, 31, 0x290EC8u);
    ctx->pc = 0x290EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EC0u;
            // 0x290ec4: 0x4600de82  mul.s       $f26, $f27, $f0 (Delay Slot)
        ctx->f[26] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EC8u; }
        if (ctx->pc != 0x290EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EC8u; }
        if (ctx->pc != 0x290EC8u) { return; }
    }
    ctx->pc = 0x290EC8u;
label_290ec8:
    // 0x290ec8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x290ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x290ecc: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ed0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290ED0u;
    SET_GPR_U32(ctx, 31, 0x290ED8u);
    ctx->pc = 0x290ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290ED0u;
            // 0x290ed4: 0x4600d681  sub.s       $f26, $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290ED8u; }
        if (ctx->pc != 0x290ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290ED8u; }
        if (ctx->pc != 0x290ED8u) { return; }
    }
    ctx->pc = 0x290ED8u;
label_290ed8:
    // 0x290ed8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290edc: 0xc047964  jal         func_11E590
    ctx->pc = 0x290EDCu;
    SET_GPR_U32(ctx, 31, 0x290EE4u);
    ctx->pc = 0x290EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EDCu;
            // 0x290ee0: 0x4600dec2  mul.s       $f27, $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EE4u; }
        if (ctx->pc != 0x290EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EE4u; }
        if (ctx->pc != 0x290EE4u) { return; }
    }
    ctx->pc = 0x290EE4u;
label_290ee4:
    // 0x290ee4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x290ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x290ee8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290eec: 0xc047964  jal         func_11E590
    ctx->pc = 0x290EECu;
    SET_GPR_U32(ctx, 31, 0x290EF4u);
    ctx->pc = 0x290EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EECu;
            // 0x290ef0: 0x4600dec0  add.s       $f27, $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EF4u; }
        if (ctx->pc != 0x290EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290EF4u; }
        if (ctx->pc != 0x290EF4u) { return; }
    }
    ctx->pc = 0x290EF4u;
label_290ef4:
    // 0x290ef4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290ef8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290EF8u;
    SET_GPR_U32(ctx, 31, 0x290F00u);
    ctx->pc = 0x290EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290EF8u;
            // 0x290efc: 0x4600a702  mul.s       $f28, $f20, $f0 (Delay Slot)
        ctx->f[28] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F00u; }
        if (ctx->pc != 0x290F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F00u; }
        if (ctx->pc != 0x290F00u) { return; }
    }
    ctx->pc = 0x290F00u;
label_290f00:
    // 0x290f00: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x290f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x290f04: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290f08: 0xc047a42  jal         func_11E908
    ctx->pc = 0x290F08u;
    SET_GPR_U32(ctx, 31, 0x290F10u);
    ctx->pc = 0x290F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F08u;
            // 0x290f0c: 0x4600e701  sub.s       $f28, $f28, $f0 (Delay Slot)
        ctx->f[28] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F10u; }
        if (ctx->pc != 0x290F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F10u; }
        if (ctx->pc != 0x290F10u) { return; }
    }
    ctx->pc = 0x290F10u;
label_290f10:
    // 0x290f10: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x290f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290f14: 0xc047964  jal         func_11E590
    ctx->pc = 0x290F14u;
    SET_GPR_U32(ctx, 31, 0x290F1Cu);
    ctx->pc = 0x290F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F14u;
            // 0x290f18: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F1Cu; }
        if (ctx->pc != 0x290F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F1Cu; }
        if (ctx->pc != 0x290F1Cu) { return; }
    }
    ctx->pc = 0x290F1Cu;
label_290f1c:
    // 0x290f1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x290f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x290f20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290f24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290f28: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x290F28u;
    SET_GPR_U32(ctx, 31, 0x290F30u);
    ctx->pc = 0x290F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F28u;
            // 0x290f2c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F30u; }
        if (ctx->pc != 0x290F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F30u; }
        if (ctx->pc != 0x290F30u) { return; }
    }
    ctx->pc = 0x290F30u;
label_290f30:
    // 0x290f30: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x290F30u;
    {
        const bool branch_taken_0x290f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290F30u;
            // 0x290f34: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f30) {
            ctx->pc = 0x291028u;
            goto label_291028;
        }
    }
    ctx->pc = 0x290F38u;
    // 0x290f38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f3c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x290F3Cu;
    SET_GPR_U32(ctx, 31, 0x290F44u);
    ctx->pc = 0x290F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F3Cu;
            // 0x290f40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F44u; }
        if (ctx->pc != 0x290F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F44u; }
        if (ctx->pc != 0x290F44u) { return; }
    }
    ctx->pc = 0x290F44u;
label_290f44:
    // 0x290f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290f48: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x290F48u;
    SET_GPR_U32(ctx, 31, 0x290F50u);
    ctx->pc = 0x290F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F48u;
            // 0x290f4c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F50u; }
        if (ctx->pc != 0x290F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F50u; }
        if (ctx->pc != 0x290F50u) { return; }
    }
    ctx->pc = 0x290F50u;
label_290f50:
    // 0x290f50: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x290f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x290f54: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x290f58: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x290F58u;
    SET_GPR_U32(ctx, 31, 0x290F60u);
    ctx->pc = 0x290F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F58u;
            // 0x290f5c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F60u; }
        if (ctx->pc != 0x290F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F60u; }
        if (ctx->pc != 0x290F60u) { return; }
    }
    ctx->pc = 0x290F60u;
label_290f60:
    // 0x290f60: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290f64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290f68: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x290f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x290f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x290f70: 0x46160b00  add.s       $f12, $f1, $f22
    ctx->pc = 0x290f70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x290f74: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x290F74u;
    SET_GPR_U32(ctx, 31, 0x290F7Cu);
    ctx->pc = 0x290F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F74u;
            // 0x290f78: 0x46170340  add.s       $f13, $f0, $f23 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F7Cu; }
        if (ctx->pc != 0x290F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F7Cu; }
        if (ctx->pc != 0x290F7Cu) { return; }
    }
    ctx->pc = 0x290F7Cu;
label_290f7c:
    // 0x290f7c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x290f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x290f80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290f84: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x290f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x290f88: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x290f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x290f8c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x290F8Cu;
    SET_GPR_U32(ctx, 31, 0x290F94u);
    ctx->pc = 0x290F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290F8Cu;
            // 0x290f90: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F94u; }
        if (ctx->pc != 0x290F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290F94u; }
        if (ctx->pc != 0x290F94u) { return; }
    }
    ctx->pc = 0x290F94u;
label_290f94:
    // 0x290f94: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290f98: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290f9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x290f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fa0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x290fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x290fa4: 0x46180b00  add.s       $f12, $f1, $f24
    ctx->pc = 0x290fa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x290fa8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x290FA8u;
    SET_GPR_U32(ctx, 31, 0x290FB0u);
    ctx->pc = 0x290FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FA8u;
            // 0x290fac: 0x46190340  add.s       $f13, $f0, $f25 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FB0u; }
        if (ctx->pc != 0x290FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FB0u; }
        if (ctx->pc != 0x290FB0u) { return; }
    }
    ctx->pc = 0x290FB0u;
label_290fb0:
    // 0x290fb0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x290fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x290fb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290fb8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x290fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x290fbc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x290fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x290fc0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x290FC0u;
    SET_GPR_U32(ctx, 31, 0x290FC8u);
    ctx->pc = 0x290FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FC0u;
            // 0x290fc4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FC8u; }
        if (ctx->pc != 0x290FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FC8u; }
        if (ctx->pc != 0x290FC8u) { return; }
    }
    ctx->pc = 0x290FC8u;
label_290fc8:
    // 0x290fc8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x290fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290fcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290fd0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x290fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290fd4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x290fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x290fd8: 0x461a0b00  add.s       $f12, $f1, $f26
    ctx->pc = 0x290fd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x290fdc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x290FDCu;
    SET_GPR_U32(ctx, 31, 0x290FE4u);
    ctx->pc = 0x290FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FDCu;
            // 0x290fe0: 0x461b0340  add.s       $f13, $f0, $f27 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FE4u; }
        if (ctx->pc != 0x290FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290FE4u; }
        if (ctx->pc != 0x290FE4u) { return; }
    }
    ctx->pc = 0x290FE4u;
label_290fe4:
    // 0x290fe4: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x290fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x290fe8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290fec: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x290fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x290ff0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x290ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x290ff4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x290ff8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x290ffc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x290FFCu;
    SET_GPR_U32(ctx, 31, 0x291004u);
    ctx->pc = 0x291000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290FFCu;
            // 0x291000: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291004u; }
        if (ctx->pc != 0x291004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291004u; }
        if (ctx->pc != 0x291004u) { return; }
    }
    ctx->pc = 0x291004u;
label_291004:
    // 0x291004: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291008: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29100c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x29100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291010: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291014: 0x461c0b00  add.s       $f12, $f1, $f28
    ctx->pc = 0x291014u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x291018: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291018u;
    SET_GPR_U32(ctx, 31, 0x291020u);
    ctx->pc = 0x29101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291018u;
            // 0x29101c: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291020u; }
        if (ctx->pc != 0x291020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291020u; }
        if (ctx->pc != 0x291020u) { return; }
    }
    ctx->pc = 0x291020u;
label_291020:
    // 0x291020: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x291020u;
    {
        const bool branch_taken_0x291020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291020u;
            // 0x291024: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291020) {
            ctx->pc = 0x2910A4u;
            goto label_2910a4;
        }
    }
    ctx->pc = 0x291028u;
label_291028:
    // 0x291028: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x291028u;
    SET_GPR_U32(ctx, 31, 0x291030u);
    ctx->pc = 0x29102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291028u;
            // 0x29102c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291030u; }
        if (ctx->pc != 0x291030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291030u; }
        if (ctx->pc != 0x291030u) { return; }
    }
    ctx->pc = 0x291030u;
label_291030:
    // 0x291030: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291034: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291038: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29103c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x29103cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291040: 0x46160b00  add.s       $f12, $f1, $f22
    ctx->pc = 0x291040u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x291044: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291044u;
    SET_GPR_U32(ctx, 31, 0x29104Cu);
    ctx->pc = 0x291048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291044u;
            // 0x291048: 0x46170340  add.s       $f13, $f0, $f23 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29104Cu; }
        if (ctx->pc != 0x29104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29104Cu; }
        if (ctx->pc != 0x29104Cu) { return; }
    }
    ctx->pc = 0x29104Cu;
label_29104c:
    // 0x29104c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x29104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291050: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291054: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291058: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29105c: 0x46180b00  add.s       $f12, $f1, $f24
    ctx->pc = 0x29105cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x291060: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291060u;
    SET_GPR_U32(ctx, 31, 0x291068u);
    ctx->pc = 0x291064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291060u;
            // 0x291064: 0x46190340  add.s       $f13, $f0, $f25 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291068u; }
        if (ctx->pc != 0x291068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291068u; }
        if (ctx->pc != 0x291068u) { return; }
    }
    ctx->pc = 0x291068u;
label_291068:
    // 0x291068: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29106c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291070: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291074: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291078: 0x461a0b00  add.s       $f12, $f1, $f26
    ctx->pc = 0x291078u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x29107c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x29107Cu;
    SET_GPR_U32(ctx, 31, 0x291084u);
    ctx->pc = 0x291080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29107Cu;
            // 0x291080: 0x461b0340  add.s       $f13, $f0, $f27 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291084u; }
        if (ctx->pc != 0x291084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291084u; }
        if (ctx->pc != 0x291084u) { return; }
    }
    ctx->pc = 0x291084u;
label_291084:
    // 0x291084: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291088: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29108c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x29108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291090: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291094: 0x461c0b00  add.s       $f12, $f1, $f28
    ctx->pc = 0x291094u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x291098: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291098u;
    SET_GPR_U32(ctx, 31, 0x2910A0u);
    ctx->pc = 0x29109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291098u;
            // 0x29109c: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910A0u; }
        if (ctx->pc != 0x2910A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910A0u; }
        if (ctx->pc != 0x2910A0u) { return; }
    }
    ctx->pc = 0x2910A0u;
label_2910a0:
    // 0x2910a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2910a4:
    // 0x2910a4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2910A4u;
    SET_GPR_U32(ctx, 31, 0x2910ACu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910ACu; }
        if (ctx->pc != 0x2910ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910ACu; }
        if (ctx->pc != 0x2910ACu) { return; }
    }
    ctx->pc = 0x2910ACu;
label_2910ac:
    // 0x2910ac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2910ACu;
    {
        const bool branch_taken_0x2910ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910ACu;
            // 0x2910b0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910ac) {
            ctx->pc = 0x291194u;
            goto label_291194;
        }
    }
    ctx->pc = 0x2910B4u;
label_2910b4:
    // 0x2910b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2910b8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2910B8u;
    SET_GPR_U32(ctx, 31, 0x2910C0u);
    ctx->pc = 0x2910BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2910B8u;
            // 0x2910bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910C0u; }
        if (ctx->pc != 0x2910C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910C0u; }
        if (ctx->pc != 0x2910C0u) { return; }
    }
    ctx->pc = 0x2910C0u;
label_2910c0:
    // 0x2910c0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2910C0u;
    {
        const bool branch_taken_0x2910c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910C0u;
            // 0x2910c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910c0) {
            ctx->pc = 0x291150u;
            goto label_291150;
        }
    }
    ctx->pc = 0x2910C8u;
    // 0x2910c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2910c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910cc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2910CCu;
    SET_GPR_U32(ctx, 31, 0x2910D4u);
    ctx->pc = 0x2910D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2910CCu;
            // 0x2910d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910D4u; }
        if (ctx->pc != 0x2910D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910D4u; }
        if (ctx->pc != 0x2910D4u) { return; }
    }
    ctx->pc = 0x2910D4u;
label_2910d4:
    // 0x2910d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2910d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2910d8: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x2910D8u;
    SET_GPR_U32(ctx, 31, 0x2910E0u);
    ctx->pc = 0x2910DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2910D8u;
            // 0x2910dc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910E0u; }
        if (ctx->pc != 0x2910E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910E0u; }
        if (ctx->pc != 0x2910E0u) { return; }
    }
    ctx->pc = 0x2910E0u;
label_2910e0:
    // 0x2910e0: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2910e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2910e4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x2910e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2910e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2910E8u;
    SET_GPR_U32(ctx, 31, 0x2910F0u);
    ctx->pc = 0x2910ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2910E8u;
            // 0x2910ec: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910F0u; }
        if (ctx->pc != 0x2910F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2910F0u; }
        if (ctx->pc != 0x2910F0u) { return; }
    }
    ctx->pc = 0x2910F0u;
label_2910f0:
    // 0x2910f0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2910f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2910f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2910f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2910f8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2910f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2910fc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2910fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291100: 0x46140b01  sub.s       $f12, $f1, $f20
    ctx->pc = 0x291100u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x291104: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291104u;
    SET_GPR_U32(ctx, 31, 0x29110Cu);
    ctx->pc = 0x291108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291104u;
            // 0x291108: 0x46150341  sub.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29110Cu; }
        if (ctx->pc != 0x29110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29110Cu; }
        if (ctx->pc != 0x29110Cu) { return; }
    }
    ctx->pc = 0x29110Cu;
label_29110c:
    // 0x29110c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x29110cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x291110: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291114: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x291118: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x291118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x29111c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x29111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x291120: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x291120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x291124: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x291124u;
    SET_GPR_U32(ctx, 31, 0x29112Cu);
    ctx->pc = 0x291128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291124u;
            // 0x291128: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29112Cu; }
        if (ctx->pc != 0x29112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29112Cu; }
        if (ctx->pc != 0x29112Cu) { return; }
    }
    ctx->pc = 0x29112Cu;
label_29112c:
    // 0x29112c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x29112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291130: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291134: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291138: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29113c: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x29113cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x291140: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291140u;
    SET_GPR_U32(ctx, 31, 0x291148u);
    ctx->pc = 0x291144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291140u;
            // 0x291144: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291148u; }
        if (ctx->pc != 0x291148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291148u; }
        if (ctx->pc != 0x291148u) { return; }
    }
    ctx->pc = 0x291148u;
label_291148:
    // 0x291148: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x291148u;
    {
        const bool branch_taken_0x291148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291148) {
            ctx->pc = 0x291190u;
            goto label_291190;
        }
    }
    ctx->pc = 0x291150u;
label_291150:
    // 0x291150: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x291150u;
    SET_GPR_U32(ctx, 31, 0x291158u);
    ctx->pc = 0x291154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291150u;
            // 0x291154: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291158u; }
        if (ctx->pc != 0x291158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291158u; }
        if (ctx->pc != 0x291158u) { return; }
    }
    ctx->pc = 0x291158u;
label_291158:
    // 0x291158: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29115c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291160: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291164: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291168: 0x46140b01  sub.s       $f12, $f1, $f20
    ctx->pc = 0x291168u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x29116c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x29116Cu;
    SET_GPR_U32(ctx, 31, 0x291174u);
    ctx->pc = 0x291170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29116Cu;
            // 0x291170: 0x46150341  sub.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291174u; }
        if (ctx->pc != 0x291174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291174u; }
        if (ctx->pc != 0x291174u) { return; }
    }
    ctx->pc = 0x291174u;
label_291174:
    // 0x291174: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x291174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291178: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29117c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x29117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291180: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x291180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x291184: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x291184u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x291188: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x291188u;
    SET_GPR_U32(ctx, 31, 0x291190u);
    ctx->pc = 0x29118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291188u;
            // 0x29118c: 0x46150340  add.s       $f13, $f0, $f21 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291190u; }
        if (ctx->pc != 0x291190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291190u; }
        if (ctx->pc != 0x291190u) { return; }
    }
    ctx->pc = 0x291190u;
label_291190:
    // 0x291190: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_291194:
    // 0x291194: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x291194u;
    SET_GPR_U32(ctx, 31, 0x29119Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29119Cu; }
        if (ctx->pc != 0x29119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29119Cu; }
        if (ctx->pc != 0x29119Cu) { return; }
    }
    ctx->pc = 0x29119Cu;
label_29119c:
    // 0x29119c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x29119Cu;
    {
        const bool branch_taken_0x29119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29119Cu;
            // 0x2911a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29119c) {
            ctx->pc = 0x2912B0u;
            goto label_2912b0;
        }
    }
    ctx->pc = 0x2911A4u;
label_2911a4:
    // 0x2911a4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2911A4u;
    SET_GPR_U32(ctx, 31, 0x2911ACu);
    ctx->pc = 0x2911A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911A4u;
            // 0x2911a8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911ACu; }
        if (ctx->pc != 0x2911ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911ACu; }
        if (ctx->pc != 0x2911ACu) { return; }
    }
    ctx->pc = 0x2911ACu;
label_2911ac:
    // 0x2911ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2911acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911b0: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x2911B0u;
    SET_GPR_U32(ctx, 31, 0x2911B8u);
    ctx->pc = 0x2911B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911B0u;
            // 0x2911b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911B8u; }
        if (ctx->pc != 0x2911B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911B8u; }
        if (ctx->pc != 0x2911B8u) { return; }
    }
    ctx->pc = 0x2911B8u;
label_2911b8:
    // 0x2911b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911bc: 0xc04d424  jal         func_135090
    ctx->pc = 0x2911BCu;
    SET_GPR_U32(ctx, 31, 0x2911C4u);
    ctx->pc = 0x2911C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911BCu;
            // 0x2911c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911C4u; }
        if (ctx->pc != 0x2911C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911C4u; }
        if (ctx->pc != 0x2911C4u) { return; }
    }
    ctx->pc = 0x2911C4u;
label_2911c4:
    // 0x2911c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2911c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911c8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2911C8u;
    SET_GPR_U32(ctx, 31, 0x2911D0u);
    ctx->pc = 0x2911CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911C8u;
            // 0x2911cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911D0u; }
        if (ctx->pc != 0x2911D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911D0u; }
        if (ctx->pc != 0x2911D0u) { return; }
    }
    ctx->pc = 0x2911D0u;
label_2911d0:
    // 0x2911d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2911d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911d4: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2911D4u;
    SET_GPR_U32(ctx, 31, 0x2911DCu);
    ctx->pc = 0x2911D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911D4u;
            // 0x2911d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911DCu; }
        if (ctx->pc != 0x2911DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911DCu; }
        if (ctx->pc != 0x2911DCu) { return; }
    }
    ctx->pc = 0x2911DCu;
label_2911dc:
    // 0x2911dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2911dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2911e0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2911e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2911e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2911e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2911e8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2911e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2911ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2911ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2911f0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2911f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2911f4: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x2911f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2911f8: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x2911F8u;
    SET_GPR_U32(ctx, 31, 0x291200u);
    ctx->pc = 0x2911FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2911F8u;
            // 0x2911fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291200u; }
        if (ctx->pc != 0x291200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291200u; }
        if (ctx->pc != 0x291200u) { return; }
    }
    ctx->pc = 0x291200u;
label_291200:
    // 0x291200: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x291200u;
    {
        const bool branch_taken_0x291200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291200u;
            // 0x291204: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291200) {
            ctx->pc = 0x2912ACu;
            goto label_2912ac;
        }
    }
    ctx->pc = 0x291208u;
    // 0x291208: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x291208u;
    SET_GPR_U32(ctx, 31, 0x291210u);
    ctx->pc = 0x29120Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291208u;
            // 0x29120c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291210u; }
        if (ctx->pc != 0x291210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291210u; }
        if (ctx->pc != 0x291210u) { return; }
    }
    ctx->pc = 0x291210u;
label_291210:
    // 0x291210: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x291210u;
    {
        const bool branch_taken_0x291210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x291214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291210u;
            // 0x291214: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291210) {
            ctx->pc = 0x291280u;
            goto label_291280;
        }
    }
    ctx->pc = 0x291218u;
    // 0x291218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29121c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x29121Cu;
    SET_GPR_U32(ctx, 31, 0x291224u);
    ctx->pc = 0x291220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29121Cu;
            // 0x291220: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291224u; }
        if (ctx->pc != 0x291224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291224u; }
        if (ctx->pc != 0x291224u) { return; }
    }
    ctx->pc = 0x291224u;
label_291224:
    // 0x291224: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291228: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x291228u;
    SET_GPR_U32(ctx, 31, 0x291230u);
    ctx->pc = 0x29122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291228u;
            // 0x29122c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291230u; }
        if (ctx->pc != 0x291230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291230u; }
        if (ctx->pc != 0x291230u) { return; }
    }
    ctx->pc = 0x291230u;
label_291230:
    // 0x291230: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x291230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x291234: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x291234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x291238: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x291238u;
    SET_GPR_U32(ctx, 31, 0x291240u);
    ctx->pc = 0x29123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291238u;
            // 0x29123c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291240u; }
        if (ctx->pc != 0x291240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291240u; }
        if (ctx->pc != 0x291240u) { return; }
    }
    ctx->pc = 0x291240u;
label_291240:
    // 0x291240: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291244: 0xc04d318  jal         func_134C60
    ctx->pc = 0x291244u;
    SET_GPR_U32(ctx, 31, 0x29124Cu);
    ctx->pc = 0x291248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291244u;
            // 0x291248: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29124Cu; }
        if (ctx->pc != 0x29124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29124Cu; }
        if (ctx->pc != 0x29124Cu) { return; }
    }
    ctx->pc = 0x29124Cu;
label_29124c:
    // 0x29124c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x29124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x291250: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291254: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x291254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x291258: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x291258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x29125c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x29125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x291260: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x291260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x291264: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x291264u;
    SET_GPR_U32(ctx, 31, 0x29126Cu);
    ctx->pc = 0x291268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291264u;
            // 0x291268: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29126Cu; }
        if (ctx->pc != 0x29126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29126Cu; }
        if (ctx->pc != 0x29126Cu) { return; }
    }
    ctx->pc = 0x29126Cu;
label_29126c:
    // 0x29126c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291270: 0xc04d318  jal         func_134C60
    ctx->pc = 0x291270u;
    SET_GPR_U32(ctx, 31, 0x291278u);
    ctx->pc = 0x291274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291270u;
            // 0x291274: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291278u; }
        if (ctx->pc != 0x291278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291278u; }
        if (ctx->pc != 0x291278u) { return; }
    }
    ctx->pc = 0x291278u;
label_291278:
    // 0x291278: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x291278u;
    {
        const bool branch_taken_0x291278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291278u;
            // 0x29127c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291278) {
            ctx->pc = 0x2912A4u;
            goto label_2912a4;
        }
    }
    ctx->pc = 0x291280u;
label_291280:
    // 0x291280: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x291280u;
    SET_GPR_U32(ctx, 31, 0x291288u);
    ctx->pc = 0x291284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291280u;
            // 0x291284: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291288u; }
        if (ctx->pc != 0x291288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291288u; }
        if (ctx->pc != 0x291288u) { return; }
    }
    ctx->pc = 0x291288u;
label_291288:
    // 0x291288: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29128c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x29128Cu;
    SET_GPR_U32(ctx, 31, 0x291294u);
    ctx->pc = 0x291290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29128Cu;
            // 0x291290: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291294u; }
        if (ctx->pc != 0x291294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291294u; }
        if (ctx->pc != 0x291294u) { return; }
    }
    ctx->pc = 0x291294u;
label_291294:
    // 0x291294: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x291294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x291298: 0xc04d318  jal         func_134C60
    ctx->pc = 0x291298u;
    SET_GPR_U32(ctx, 31, 0x2912A0u);
    ctx->pc = 0x29129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291298u;
            // 0x29129c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912A0u; }
        if (ctx->pc != 0x2912A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912A0u; }
        if (ctx->pc != 0x2912A0u) { return; }
    }
    ctx->pc = 0x2912A0u;
label_2912a0:
    // 0x2912a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2912a4:
    // 0x2912a4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2912A4u;
    SET_GPR_U32(ctx, 31, 0x2912ACu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912ACu; }
        if (ctx->pc != 0x2912ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2912ACu; }
        if (ctx->pc != 0x2912ACu) { return; }
    }
    ctx->pc = 0x2912ACu;
label_2912ac:
    // 0x2912ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2912acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2912b0:
    // 0x2912b0: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x2912b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2912b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2912b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2912b8: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x2912b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2912bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2912bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2912c0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x2912c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2912c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2912c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2912c8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2912c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2912cc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2912ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2912d0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2912d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2912d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2912d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2912d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2912d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2912dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2912DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2912E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2912DCu;
            // 0x2912e0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2912E4u;
}
