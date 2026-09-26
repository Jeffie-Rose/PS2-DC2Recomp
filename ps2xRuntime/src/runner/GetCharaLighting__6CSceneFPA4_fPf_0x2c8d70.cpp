#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaLighting__6CSceneFPA4_fPf
// Address: 0x2c8d70 - 0x2c8f80
void GetCharaLighting__6CSceneFPA4_fPf_0x2c8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaLighting__6CSceneFPA4_fPf_0x2c8d70");
#endif

    switch (ctx->pc) {
        case 0x2c8da8u: goto label_2c8da8;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e20u: goto label_2c8e20;
        case 0x2c8e30u: goto label_2c8e30;
        case 0x2c8e50u: goto label_2c8e50;
        default: break;
    }

    ctx->pc = 0x2c8d70u;

    // 0x2c8d70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c8d74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c8d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c8d78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c8d7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c8d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c8d80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c8d84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c8d88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d90: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2c8d90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c8d94: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c8d94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c8d98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c8d9c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2c8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2c8da0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2C8DA0u;
    SET_GPR_U32(ctx, 31, 0x2C8DA8u);
    ctx->pc = 0x2C8DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DA0u;
            // 0x2c8da4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8DA8u; }
        if (ctx->pc != 0x2C8DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8DA8u; }
        if (ctx->pc != 0x2C8DA8u) { return; }
    }
    ctx->pc = 0x2C8DA8u;
label_2c8da8:
    // 0x2c8da8: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2C8DA8u;
    {
        const bool branch_taken_0x2c8da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DA8u;
            // 0x2c8dac: 0x3c033fe6  lui         $v1, 0x3FE6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8da8) {
            ctx->pc = 0x2C8F54u;
            goto label_2c8f54;
        }
    }
    ctx->pc = 0x2C8DB0u;
    // 0x2c8db0: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8db4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2c8db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2c8db8: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x2c8db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2c8dbc: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2c8dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c8dc0: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2c8dc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c8dc4: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x2c8dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2c8dc8: 0x3c044260  lui         $a0, 0x4260
    ctx->pc = 0x2c8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16992 << 16));
    // 0x2c8dcc: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x2c8dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2c8dd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8DD0u;
    {
        const bool branch_taken_0x2c8dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dd0) {
            ctx->pc = 0x2C8DF0u;
            goto label_2c8df0;
        }
    }
    ctx->pc = 0x2C8DD8u;
    // 0x2c8dd8: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x2c8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ddc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c8de0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c8de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8de4: 0xc45400f0  lwc1        $f20, 0xF0($v0)
    ctx->pc = 0x2c8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8de8: 0xc45500f4  lwc1        $f21, 0xF4($v0)
    ctx->pc = 0x2c8de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c8dec: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x2c8decu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c8df0:
    // 0x2c8df0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2c8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2c8df4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2c8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c8df8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x2c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x2c8dfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c8dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2c8e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8e04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c8e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e08: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2c8e08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2c8e0c:
    // 0x2c8e0c: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x2c8e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2c8e10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c8e10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c8e14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c8e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e18: 0xc041e96  jal         func_107A58
    ctx->pc = 0x2C8E18u;
    SET_GPR_U32(ctx, 31, 0x2C8E20u);
    ctx->pc = 0x2C8E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E18u;
            // 0x2c8e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E20u; }
        if (ctx->pc != 0x2C8E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E20u; }
        if (ctx->pc != 0x2C8E20u) { return; }
    }
    ctx->pc = 0x2C8E20u;
label_2c8e20:
    // 0x2c8e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c8e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c8e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e28: 0xc04bd18  jal         func_12F460
    ctx->pc = 0x2C8E28u;
    SET_GPR_U32(ctx, 31, 0x2C8E30u);
    ctx->pc = 0x2C8E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E28u;
            // 0x2c8e2c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F460u;
    if (runtime->hasFunction(0x12F460u)) {
        auto targetFn = runtime->lookupFunction(0x12F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E30u; }
        if (ctx->pc != 0x2C8E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMin__FPfPfPf_0x12f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E30u; }
        if (ctx->pc != 0x2C8E30u) { return; }
    }
    ctx->pc = 0x2C8E30u;
label_2c8e30:
    // 0x2c8e30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c8e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c8e34: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2c8e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c8e38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C8E38u;
    {
        const bool branch_taken_0x2c8e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E38u;
            // 0x2c8e3c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e38) {
            ctx->pc = 0x2C8E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8e0c;
        }
    }
    ctx->pc = 0x2C8E40u;
    // 0x2c8e40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c8e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c8e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e48: 0xc041e96  jal         func_107A58
    ctx->pc = 0x2C8E48u;
    SET_GPR_U32(ctx, 31, 0x2C8E50u);
    ctx->pc = 0x2C8E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E48u;
            // 0x2c8e4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E50u; }
        if (ctx->pc != 0x2C8E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E50u; }
        if (ctx->pc != 0x2C8E50u) { return; }
    }
    ctx->pc = 0x2C8E50u;
label_2c8e50:
    // 0x2c8e50: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8e54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8e5c: 0x0  nop
    ctx->pc = 0x2c8e5cu;
    // NOP
    // 0x2c8e60: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C8E60u;
    {
        const bool branch_taken_0x2c8e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8e60) {
            ctx->pc = 0x2C8E90u;
            goto label_2c8e90;
        }
    }
    ctx->pc = 0x2C8E68u;
    // 0x2c8e68: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2c8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8e70: 0x0  nop
    ctx->pc = 0x2c8e70u;
    // NOP
    // 0x2c8e74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E74u;
    {
        const bool branch_taken_0x2c8e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8e74) {
            ctx->pc = 0x2C8E84u;
            goto label_2c8e84;
        }
    }
    ctx->pc = 0x2C8E7Cu;
    // 0x2c8e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8E7Cu;
    {
        const bool branch_taken_0x2c8e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e7c) {
            ctx->pc = 0x2C8E88u;
            goto label_2c8e88;
        }
    }
    ctx->pc = 0x2C8E84u;
label_2c8e84:
    // 0x2c8e84: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2c8e84u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2c8e88:
    // 0x2c8e88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8E88u;
    {
        const bool branch_taken_0x2c8e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e88) {
            ctx->pc = 0x2C8EB4u;
            goto label_2c8eb4;
        }
    }
    ctx->pc = 0x2C8E90u;
label_2c8e90:
    // 0x2c8e90: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8e98: 0x0  nop
    ctx->pc = 0x2c8e98u;
    // NOP
    // 0x2c8e9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E9Cu;
    {
        const bool branch_taken_0x2c8e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8e9c) {
            ctx->pc = 0x2C8EACu;
            goto label_2c8eac;
        }
    }
    ctx->pc = 0x2C8EA4u;
    // 0x2c8ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8EA4u;
    {
        const bool branch_taken_0x2c8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EA4u;
            // 0x2c8ea8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ea4) {
            ctx->pc = 0x2C8EB4u;
            goto label_2c8eb4;
        }
    }
    ctx->pc = 0x2C8EACu;
label_2c8eac:
    // 0x2c8eac: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c8eacu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c8eb0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x2c8eb0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_2c8eb4:
    // 0x2c8eb4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2c8eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8eb8: 0x0  nop
    ctx->pc = 0x2c8eb8u;
    // NOP
    // 0x2c8ebc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C8EBCu;
    {
        const bool branch_taken_0x2c8ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EBCu;
            // 0x2c8ec0: 0x4600b041  sub.s       $f1, $f22, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ebc) {
            ctx->pc = 0x2C8EE8u;
            goto label_2c8ee8;
        }
    }
    ctx->pc = 0x2C8EC4u;
    // 0x2c8ec4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8ecc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c8eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c8ed0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2c8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ed4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8ed8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c8ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c8edc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8ee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c8ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c8ee4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c8ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2c8ee8:
    // 0x2c8ee8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c8ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8eec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c8eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c8ef0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c8ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8ef4: 0x0  nop
    ctx->pc = 0x2c8ef4u;
    // NOP
    // 0x2c8ef8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c8ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8efc: 0x0  nop
    ctx->pc = 0x2c8efcu;
    // NOP
    // 0x2c8f00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8F00u;
    {
        const bool branch_taken_0x2c8f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f00) {
            ctx->pc = 0x2C8F0Cu;
            goto label_2c8f0c;
        }
    }
    ctx->pc = 0x2C8F08u;
    // 0x2c8f08: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2c8f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2c8f0c:
    // 0x2c8f0c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c8f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f10: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c8f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f18: 0x0  nop
    ctx->pc = 0x2c8f18u;
    // NOP
    // 0x2c8f1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f20: 0x0  nop
    ctx->pc = 0x2c8f20u;
    // NOP
    // 0x2c8f24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8F24u;
    {
        const bool branch_taken_0x2c8f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f24) {
            ctx->pc = 0x2C8F30u;
            goto label_2c8f30;
        }
    }
    ctx->pc = 0x2C8F2Cu;
    // 0x2c8f2c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c8f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2c8f30:
    // 0x2c8f30: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2c8f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f34: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c8f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8f3c: 0x0  nop
    ctx->pc = 0x2c8f3cu;
    // NOP
    // 0x2c8f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8f44: 0x0  nop
    ctx->pc = 0x2c8f44u;
    // NOP
    // 0x2c8f48: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8F48u;
    {
        const bool branch_taken_0x2c8f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8f48) {
            ctx->pc = 0x2C8F54u;
            goto label_2c8f54;
        }
    }
    ctx->pc = 0x2C8F50u;
    // 0x2c8f50: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c8f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2c8f54:
    // 0x2c8f54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c8f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c8f58: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2c8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c8f5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c8f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8f60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c8f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c8f64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c8f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8f68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c8f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8f70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c8f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F78u;
            // 0x2c8f7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8F80u;
}
