#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CGiftMarkFv
// Address: 0x1c9d00 - 0x1c9e9c
void Draw__9CGiftMarkFv_0x1c9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CGiftMarkFv_0x1c9d00");
#endif

    switch (ctx->pc) {
        case 0x1c9d30u: goto label_1c9d30;
        case 0x1c9d64u: goto label_1c9d64;
        case 0x1c9d84u: goto label_1c9d84;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9d9cu: goto label_1c9d9c;
        case 0x1c9da8u: goto label_1c9da8;
        case 0x1c9db4u: goto label_1c9db4;
        case 0x1c9dc0u: goto label_1c9dc0;
        case 0x1c9dccu: goto label_1c9dcc;
        case 0x1c9dd8u: goto label_1c9dd8;
        case 0x1c9de4u: goto label_1c9de4;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e34u: goto label_1c9e34;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e88u: goto label_1c9e88;
        default: break;
    }

    ctx->pc = 0x1c9d00u;

    // 0x1c9d00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c9d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c9d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9d10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c9d14: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1C9D14u;
    {
        const bool branch_taken_0x1c9d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D14u;
            // 0x1c9d18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d14) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9D1Cu;
    // 0x1c9d1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9d20: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C9D20u;
    {
        const bool branch_taken_0x1c9d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D20u;
            // 0x1c9d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d20) {
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9D28u;
    // 0x1c9d28: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x1C9D28u;
    SET_GPR_U32(ctx, 31, 0x1C9D30u);
    ctx->pc = 0x1C9D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D28u;
            // 0x1c9d2c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D30u; }
        if (ctx->pc != 0x1C9D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D30u; }
        if (ctx->pc != 0x1C9D30u) { return; }
    }
    ctx->pc = 0x1C9D30u;
label_1c9d30:
    // 0x1c9d30: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1c9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9d34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9d38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c9d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c9d3c: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c9d40: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9d44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c9d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9d4c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c9d4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c9d50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c9d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c9d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c9d58: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c9d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c9d5c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D64u);
    ctx->pc = 0x1C9D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D5Cu;
            // 0x1c9d60: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D64u; }
        if (ctx->pc != 0x1C9D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D64u; }
        if (ctx->pc != 0x1C9D64u) { return; }
    }
    ctx->pc = 0x1C9D64u;
label_1c9d64:
    // 0x1c9d64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c9d68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9d6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c9d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c9d70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1c9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9d74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c9d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c9d78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9d7c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D84u);
    ctx->pc = 0x1C9D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D7Cu;
            // 0x1c9d80: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D84u; }
        if (ctx->pc != 0x1C9D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D84u; }
        if (ctx->pc != 0x1C9D84u) { return; }
    }
    ctx->pc = 0x1C9D84u;
label_1c9d84:
    // 0x1c9d84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d8c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D94u);
    ctx->pc = 0x1C9D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D8Cu;
            // 0x1c9d90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D94u; }
        if (ctx->pc != 0x1C9D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D94u; }
        if (ctx->pc != 0x1C9D94u) { return; }
    }
    ctx->pc = 0x1C9D94u;
label_1c9d94:
    // 0x1c9d94: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C9D94u;
    SET_GPR_U32(ctx, 31, 0x1C9D9Cu);
    ctx->pc = 0x1C9D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9D94u;
            // 0x1c9d98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D9Cu; }
        if (ctx->pc != 0x1C9D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D9Cu; }
        if (ctx->pc != 0x1C9D9Cu) { return; }
    }
    ctx->pc = 0x1C9D9Cu;
label_1c9d9c:
    // 0x1c9d9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9da0: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C9DA0u;
    SET_GPR_U32(ctx, 31, 0x1C9DA8u);
    ctx->pc = 0x1C9DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DA0u;
            // 0x1c9da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DA8u; }
        if (ctx->pc != 0x1C9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DA8u; }
        if (ctx->pc != 0x1C9DA8u) { return; }
    }
    ctx->pc = 0x1C9DA8u;
label_1c9da8:
    // 0x1c9da8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9dac: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C9DACu;
    SET_GPR_U32(ctx, 31, 0x1C9DB4u);
    ctx->pc = 0x1C9DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DACu;
            // 0x1c9db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DB4u; }
        if (ctx->pc != 0x1C9DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DB4u; }
        if (ctx->pc != 0x1C9DB4u) { return; }
    }
    ctx->pc = 0x1C9DB4u;
label_1c9db4:
    // 0x1c9db4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9db8: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C9DB8u;
    SET_GPR_U32(ctx, 31, 0x1C9DC0u);
    ctx->pc = 0x1C9DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DB8u;
            // 0x1c9dbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DC0u; }
        if (ctx->pc != 0x1C9DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DC0u; }
        if (ctx->pc != 0x1C9DC0u) { return; }
    }
    ctx->pc = 0x1C9DC0u;
label_1c9dc0:
    // 0x1c9dc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9dc4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C9DC4u;
    SET_GPR_U32(ctx, 31, 0x1C9DCCu);
    ctx->pc = 0x1C9DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DC4u;
            // 0x1c9dc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DCCu; }
        if (ctx->pc != 0x1C9DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DCCu; }
        if (ctx->pc != 0x1C9DCCu) { return; }
    }
    ctx->pc = 0x1C9DCCu;
label_1c9dcc:
    // 0x1c9dcc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9dd0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C9DD0u;
    SET_GPR_U32(ctx, 31, 0x1C9DD8u);
    ctx->pc = 0x1C9DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DD0u;
            // 0x1c9dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DD8u; }
        if (ctx->pc != 0x1C9DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DD8u; }
        if (ctx->pc != 0x1C9DD8u) { return; }
    }
    ctx->pc = 0x1C9DD8u;
label_1c9dd8:
    // 0x1c9dd8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9ddc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C9DDCu;
    SET_GPR_U32(ctx, 31, 0x1C9DE4u);
    ctx->pc = 0x1C9DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DDCu;
            // 0x1c9de0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DE4u; }
        if (ctx->pc != 0x1C9DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DE4u; }
        if (ctx->pc != 0x1C9DE4u) { return; }
    }
    ctx->pc = 0x1C9DE4u;
label_1c9de4:
    // 0x1c9de4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c9de8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9dec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9df0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9df4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C9DF4u;
    SET_GPR_U32(ctx, 31, 0x1C9DFCu);
    ctx->pc = 0x1C9DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9DF4u;
            // 0x1c9df8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DFCu; }
        if (ctx->pc != 0x1C9DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DFCu; }
        if (ctx->pc != 0x1C9DFCu) { return; }
    }
    ctx->pc = 0x1C9DFCu;
label_1c9dfc:
    // 0x1c9dfc: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c9e00: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C9E00u;
    SET_GPR_U32(ctx, 31, 0x1C9E08u);
    ctx->pc = 0x1C9E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E00u;
            // 0x1c9e04: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E08u; }
        if (ctx->pc != 0x1C9E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E08u; }
        if (ctx->pc != 0x1C9E08u) { return; }
    }
    ctx->pc = 0x1C9E08u;
label_1c9e08:
    // 0x1c9e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c9e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e10: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1c9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1c9e14: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1c9e18:
    // 0x1c9e18: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c9e1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9e20: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1c9e24: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c9e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c9e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e2c: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C9E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E34u);
    ctx->pc = 0x1C9E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E2Cu;
            // 0x1c9e30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E34u; }
        if (ctx->pc != 0x1C9E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E34u; }
        if (ctx->pc != 0x1C9E34u) { return; }
    }
    ctx->pc = 0x1C9E34u;
label_1c9e34:
    // 0x1c9e34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9E34u;
    {
        const bool branch_taken_0x1c9e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E34u;
            // 0x1c9e38: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e34) {
            ctx->pc = 0x1C9E70u;
            goto label_1c9e70;
        }
    }
    ctx->pc = 0x1C9E3Cu;
    // 0x1c9e3c: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x1c9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x1c9e40: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C9E40u;
    SET_GPR_U32(ctx, 31, 0x1C9E48u);
    ctx->pc = 0x1C9E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E40u;
            // 0x1c9e44: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E48u; }
        if (ctx->pc != 0x1C9E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E48u; }
        if (ctx->pc != 0x1C9E48u) { return; }
    }
    ctx->pc = 0x1C9E48u;
label_1c9e48:
    // 0x1c9e48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9e4c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C9E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E54u);
    ctx->pc = 0x1C9E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E4Cu;
            // 0x1c9e50: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E54u; }
        if (ctx->pc != 0x1C9E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E54u; }
        if (ctx->pc != 0x1C9E54u) { return; }
    }
    ctx->pc = 0x1C9E54u;
label_1c9e54:
    // 0x1c9e54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9e58: 0x240500fc  addiu       $a1, $zero, 0xFC
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1c9e5c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E64u);
    ctx->pc = 0x1C9E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E5Cu;
            // 0x1c9e60: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E64u; }
        if (ctx->pc != 0x1C9E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E64u; }
        if (ctx->pc != 0x1C9E64u) { return; }
    }
    ctx->pc = 0x1C9E64u;
label_1c9e64:
    // 0x1c9e64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9e68: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C9E68u;
    SET_GPR_U32(ctx, 31, 0x1C9E70u);
    ctx->pc = 0x1C9E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E68u;
            // 0x1c9e6c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E70u; }
        if (ctx->pc != 0x1C9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E70u; }
        if (ctx->pc != 0x1C9E70u) { return; }
    }
    ctx->pc = 0x1C9E70u;
label_1c9e70:
    // 0x1c9e70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c9e74: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1c9e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c9e78: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C9E78u;
    {
        const bool branch_taken_0x1c9e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E78u;
            // 0x1c9e7c: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e78) {
            ctx->pc = 0x1C9E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E80u;
    // 0x1c9e80: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C9E80u;
    SET_GPR_U32(ctx, 31, 0x1C9E88u);
    ctx->pc = 0x1C9E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E80u;
            // 0x1c9e84: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E88u; }
        if (ctx->pc != 0x1C9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9E88u; }
        if (ctx->pc != 0x1C9E88u) { return; }
    }
    ctx->pc = 0x1C9E88u;
label_1c9e88:
    // 0x1c9e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9E94u;
            // 0x1c9e98: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E9Cu;
}
