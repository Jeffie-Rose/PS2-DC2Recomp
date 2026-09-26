#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki
// Address: 0x29d9a0 - 0x29dfbc
void GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki_0x29d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki_0x29d9a0");
#endif

    switch (ctx->pc) {
        case 0x29da0cu: goto label_29da0c;
        case 0x29da14u: goto label_29da14;
        case 0x29da20u: goto label_29da20;
        case 0x29da84u: goto label_29da84;
        case 0x29dab8u: goto label_29dab8;
        case 0x29dac8u: goto label_29dac8;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daf4u: goto label_29daf4;
        case 0x29db20u: goto label_29db20;
        case 0x29db58u: goto label_29db58;
        case 0x29db68u: goto label_29db68;
        case 0x29db74u: goto label_29db74;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db88u: goto label_29db88;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dc24u: goto label_29dc24;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dd30u: goto label_29dd30;
        case 0x29dd7cu: goto label_29dd7c;
        case 0x29dd88u: goto label_29dd88;
        case 0x29de40u: goto label_29de40;
        case 0x29de8cu: goto label_29de8c;
        case 0x29de98u: goto label_29de98;
        case 0x29df1cu: goto label_29df1c;
        default: break;
    }

    ctx->pc = 0x29d9a0u;

    // 0x29d9a0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x29d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x29d9a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29d9a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29d9ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29d9b0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x29d9b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29d9b8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29d9b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29d9c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29d9c4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29d9c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d9cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29d9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d9d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29d9d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d9dc: 0x1ea00003  bgtz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D9DCu;
    {
        const bool branch_taken_0x29d9dc = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x29D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9DCu;
            // 0x29d9e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9dc) {
            ctx->pc = 0x29D9ECu;
            goto label_29d9ec;
        }
    }
    ctx->pc = 0x29D9E4u;
    // 0x29d9e4: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x29D9E4u;
    {
        const bool branch_taken_0x29d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9E4u;
            // 0x29d9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9e4) {
            ctx->pc = 0x29DF8Cu;
            goto label_29df8c;
        }
    }
    ctx->pc = 0x29D9ECu;
label_29d9ec:
    // 0x29d9ec: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x29d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x29d9f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29d9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D9F4u;
    {
        const bool branch_taken_0x29d9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9F4u;
            // 0x29d9f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9f4) {
            ctx->pc = 0x29DA00u;
            goto label_29da00;
        }
    }
    ctx->pc = 0x29D9FCu;
    // 0x29d9fc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29d9fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29da00:
    // 0x29da00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29da00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da04: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29DA04u;
    SET_GPR_U32(ctx, 31, 0x29DA0Cu);
    ctx->pc = 0x29DA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA04u;
            // 0x29da08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA0Cu; }
        if (ctx->pc != 0x29DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA0Cu; }
        if (ctx->pc != 0x29DA0Cu) { return; }
    }
    ctx->pc = 0x29DA0Cu;
label_29da0c:
    // 0x29da0c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DA0Cu;
    SET_GPR_U32(ctx, 31, 0x29DA14u);
    ctx->pc = 0x29DA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA0Cu;
            // 0x29da10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA14u; }
        if (ctx->pc != 0x29DA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA14u; }
        if (ctx->pc != 0x29DA14u) { return; }
    }
    ctx->pc = 0x29DA14u;
label_29da14:
    // 0x29da14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x29DA14u;
    {
        const bool branch_taken_0x29da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA14u;
            // 0x29da18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da14) {
            ctx->pc = 0x29DAC0u;
            goto label_29dac0;
        }
    }
    ctx->pc = 0x29DA1Cu;
    // 0x29da1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29da1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29da20:
    // 0x29da20: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x29da20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x29da24: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x29DA24u;
    {
        const bool branch_taken_0x29da24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da24) {
            ctx->pc = 0x29DAC0u;
            goto label_29dac0;
        }
    }
    ctx->pc = 0x29DA2Cu;
    // 0x29da2c: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x29da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x29da30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29DA30u;
    {
        const bool branch_taken_0x29da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da30) {
            ctx->pc = 0x29DAB0u;
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DA38u;
    // 0x29da38: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x29da38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x29da3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29da40: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29DA40u;
    {
        const bool branch_taken_0x29da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29da40) {
            ctx->pc = 0x29DAB0u;
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DA48u;
    // 0x29da48: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DA48u;
    {
        const bool branch_taken_0x29da48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da48) {
            ctx->pc = 0x29DA64u;
            goto label_29da64;
        }
    }
    ctx->pc = 0x29DA50u;
    // 0x29da50: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x29da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x29da54: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29DA54u;
    {
        const bool branch_taken_0x29da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da54) {
            ctx->pc = 0x29DAB0u;
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DA5Cu;
    // 0x29da5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DA5Cu;
    {
        const bool branch_taken_0x29da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da5c) {
            ctx->pc = 0x29DA74u;
            goto label_29da74;
        }
    }
    ctx->pc = 0x29DA64u;
label_29da64:
    // 0x29da64: 0x0  nop
    ctx->pc = 0x29da64u;
    // NOP
    // 0x29da68: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x29da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29da6c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29DA6Cu;
    {
        const bool branch_taken_0x29da6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da6c) {
            ctx->pc = 0x29DAB0u;
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DA74u;
label_29da74:
    // 0x29da74: 0x0  nop
    ctx->pc = 0x29da74u;
    // NOP
    // 0x29da78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da7c: 0xc04c018  jal         func_130060
    ctx->pc = 0x29DA7Cu;
    SET_GPR_U32(ctx, 31, 0x29DA84u);
    ctx->pc = 0x29DA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA7Cu;
            // 0x29da80: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA84u; }
        if (ctx->pc != 0x29DA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA84u; }
        if (ctx->pc != 0x29DA84u) { return; }
    }
    ctx->pc = 0x29DA84u;
label_29da84:
    // 0x29da84: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x29da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29da88: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x29da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29da8c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x29da8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29da90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29da90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29da94: 0x0  nop
    ctx->pc = 0x29da94u;
    // NOP
    // 0x29da98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29DA98u;
    {
        const bool branch_taken_0x29da98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA98u;
            // 0x29da9c: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da98) {
            ctx->pc = 0x29DAB0u;
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DAA0u;
    // 0x29daa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29daa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29daa4: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x29daa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x29daa8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x29daa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x29daac: 0xac5101a0  sw          $s1, 0x1A0($v0)
    ctx->pc = 0x29daacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 17));
label_29dab0:
    // 0x29dab0: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DAB0u;
    SET_GPR_U32(ctx, 31, 0x29DAB8u);
    ctx->pc = 0x29DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAB0u;
            // 0x29dab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAB8u; }
        if (ctx->pc != 0x29DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAB8u; }
        if (ctx->pc != 0x29DAB8u) { return; }
    }
    ctx->pc = 0x29DAB8u;
label_29dab8:
    // 0x29dab8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x29DAB8u;
    {
        const bool branch_taken_0x29dab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAB8u;
            // 0x29dabc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dab8) {
            ctx->pc = 0x29DA20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29da20;
        }
    }
    ctx->pc = 0x29DAC0u;
label_29dac0:
    // 0x29dac0: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29DAC0u;
    SET_GPR_U32(ctx, 31, 0x29DAC8u);
    ctx->pc = 0x29DAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAC0u;
            // 0x29dac4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAC8u; }
        if (ctx->pc != 0x29DAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAC8u; }
        if (ctx->pc != 0x29DAC8u) { return; }
    }
    ctx->pc = 0x29DAC8u;
label_29dac8:
    // 0x29dac8: 0x33c30003  andi        $v1, $fp, 0x3
    ctx->pc = 0x29dac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
    // 0x29dacc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dad0: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x29DAD0u;
    {
        const bool branch_taken_0x29dad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29DAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAD0u;
            // 0x29dad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dad0) {
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DAD8u;
    // 0x29dad8: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29DAD8u;
    SET_GPR_U32(ctx, 31, 0x29DAE0u);
    ctx->pc = 0x29DADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAD8u;
            // 0x29dadc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAE0u; }
        if (ctx->pc != 0x29DAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAE0u; }
        if (ctx->pc != 0x29DAE0u) { return; }
    }
    ctx->pc = 0x29DAE0u;
label_29dae0:
    // 0x29dae0: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DAE0u;
    SET_GPR_U32(ctx, 31, 0x29DAE8u);
    ctx->pc = 0x29DAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAE0u;
            // 0x29dae4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAE8u; }
        if (ctx->pc != 0x29DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAE8u; }
        if (ctx->pc != 0x29DAE8u) { return; }
    }
    ctx->pc = 0x29DAE8u;
label_29dae8:
    // 0x29dae8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29DAE8u;
    {
        const bool branch_taken_0x29dae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAE8u;
            // 0x29daec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dae8) {
            ctx->pc = 0x29DB60u;
            goto label_29db60;
        }
    }
    ctx->pc = 0x29DAF0u;
    // 0x29daf0: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x29daf0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29daf4:
    // 0x29daf4: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x29daf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x29daf8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x29DAF8u;
    {
        const bool branch_taken_0x29daf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29daf8) {
            ctx->pc = 0x29DB60u;
            goto label_29db60;
        }
    }
    ctx->pc = 0x29DB00u;
    // 0x29db00: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x29db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x29db04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29DB04u;
    {
        const bool branch_taken_0x29db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db04) {
            ctx->pc = 0x29DB4Cu;
            goto label_29db4c;
        }
    }
    ctx->pc = 0x29DB0Cu;
    // 0x29db0c: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x29db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x29db10: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29DB10u;
    {
        const bool branch_taken_0x29db10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB10u;
            // 0x29db14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db10) {
            ctx->pc = 0x29DB4Cu;
            goto label_29db4c;
        }
    }
    ctx->pc = 0x29DB18u;
    // 0x29db18: 0xc04c018  jal         func_130060
    ctx->pc = 0x29DB18u;
    SET_GPR_U32(ctx, 31, 0x29DB20u);
    ctx->pc = 0x29DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB18u;
            // 0x29db1c: 0x26450180  addiu       $a1, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB20u; }
        if (ctx->pc != 0x29DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB20u; }
        if (ctx->pc != 0x29DB20u) { return; }
    }
    ctx->pc = 0x29DB20u;
label_29db20:
    // 0x29db20: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x29db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x29db24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29db28: 0x0  nop
    ctx->pc = 0x29db28u;
    // NOP
    // 0x29db2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29db2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29db30: 0x0  nop
    ctx->pc = 0x29db30u;
    // NOP
    // 0x29db34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29DB34u;
    {
        const bool branch_taken_0x29db34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB34u;
            // 0x29db38: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db34) {
            ctx->pc = 0x29DB4Cu;
            goto label_29db4c;
        }
    }
    ctx->pc = 0x29DB3Cu;
    // 0x29db3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29db40: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x29db40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x29db44: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29db44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29db48: 0xac5201a0  sw          $s2, 0x1A0($v0)
    ctx->pc = 0x29db48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 18));
label_29db4c:
    // 0x29db4c: 0x0  nop
    ctx->pc = 0x29db4cu;
    // NOP
    // 0x29db50: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DB50u;
    SET_GPR_U32(ctx, 31, 0x29DB58u);
    ctx->pc = 0x29DB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB50u;
            // 0x29db54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB58u; }
        if (ctx->pc != 0x29DB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB58u; }
        if (ctx->pc != 0x29DB58u) { return; }
    }
    ctx->pc = 0x29DB58u;
label_29db58:
    // 0x29db58: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x29DB58u;
    {
        const bool branch_taken_0x29db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB58u;
            // 0x29db5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db58) {
            ctx->pc = 0x29DAF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29daf4;
        }
    }
    ctx->pc = 0x29DB60u;
label_29db60:
    // 0x29db60: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29DB60u;
    SET_GPR_U32(ctx, 31, 0x29DB68u);
    ctx->pc = 0x29DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB60u;
            // 0x29db64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB68u; }
        if (ctx->pc != 0x29DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB68u; }
        if (ctx->pc != 0x29DB68u) { return; }
    }
    ctx->pc = 0x29DB68u;
label_29db68:
    // 0x29db68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db6c: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29DB6Cu;
    SET_GPR_U32(ctx, 31, 0x29DB74u);
    ctx->pc = 0x29DB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB6Cu;
            // 0x29db70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB74u; }
        if (ctx->pc != 0x29DB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB74u; }
        if (ctx->pc != 0x29DB74u) { return; }
    }
    ctx->pc = 0x29DB74u;
label_29db74:
    // 0x29db74: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DB74u;
    SET_GPR_U32(ctx, 31, 0x29DB7Cu);
    ctx->pc = 0x29DB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB74u;
            // 0x29db78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB7Cu; }
        if (ctx->pc != 0x29DB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB7Cu; }
        if (ctx->pc != 0x29DB7Cu) { return; }
    }
    ctx->pc = 0x29DB7Cu;
label_29db7c:
    // 0x29db7c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29DB7Cu;
    {
        const bool branch_taken_0x29db7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB7Cu;
            // 0x29db80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db7c) {
            ctx->pc = 0x29DBF0u;
            goto label_29dbf0;
        }
    }
    ctx->pc = 0x29DB84u;
    // 0x29db84: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x29db84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29db88:
    // 0x29db88: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x29db88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x29db8c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x29DB8Cu;
    {
        const bool branch_taken_0x29db8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db8c) {
            ctx->pc = 0x29DBF0u;
            goto label_29dbf0;
        }
    }
    ctx->pc = 0x29DB94u;
    // 0x29db94: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x29db98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29DB98u;
    {
        const bool branch_taken_0x29db98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db98) {
            ctx->pc = 0x29DBE0u;
            goto label_29dbe0;
        }
    }
    ctx->pc = 0x29DBA0u;
    // 0x29dba0: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x29dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x29dba4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29DBA4u;
    {
        const bool branch_taken_0x29dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBA4u;
            // 0x29dba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dba4) {
            ctx->pc = 0x29DBE0u;
            goto label_29dbe0;
        }
    }
    ctx->pc = 0x29DBACu;
    // 0x29dbac: 0xc04c018  jal         func_130060
    ctx->pc = 0x29DBACu;
    SET_GPR_U32(ctx, 31, 0x29DBB4u);
    ctx->pc = 0x29DBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBACu;
            // 0x29dbb0: 0x26450180  addiu       $a1, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBB4u; }
        if (ctx->pc != 0x29DBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBB4u; }
        if (ctx->pc != 0x29DBB4u) { return; }
    }
    ctx->pc = 0x29DBB4u;
label_29dbb4:
    // 0x29dbb4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x29dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x29dbb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29dbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29dbbc: 0x0  nop
    ctx->pc = 0x29dbbcu;
    // NOP
    // 0x29dbc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29dbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dbc4: 0x0  nop
    ctx->pc = 0x29dbc4u;
    // NOP
    // 0x29dbc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29DBC8u;
    {
        const bool branch_taken_0x29dbc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBC8u;
            // 0x29dbcc: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbc8) {
            ctx->pc = 0x29DBE0u;
            goto label_29dbe0;
        }
    }
    ctx->pc = 0x29DBD0u;
    // 0x29dbd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29dbd4: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x29dbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x29dbd8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29dbdc: 0xac5201a0  sw          $s2, 0x1A0($v0)
    ctx->pc = 0x29dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 18));
label_29dbe0:
    // 0x29dbe0: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29DBE0u;
    SET_GPR_U32(ctx, 31, 0x29DBE8u);
    ctx->pc = 0x29DBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBE0u;
            // 0x29dbe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBE8u; }
        if (ctx->pc != 0x29DBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBE8u; }
        if (ctx->pc != 0x29DBE8u) { return; }
    }
    ctx->pc = 0x29DBE8u;
label_29dbe8:
    // 0x29dbe8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x29DBE8u;
    {
        const bool branch_taken_0x29dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBE8u;
            // 0x29dbec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbe8) {
            ctx->pc = 0x29DB88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29db88;
        }
    }
    ctx->pc = 0x29DBF0u;
label_29dbf0:
    // 0x29dbf0: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29DBF0u;
    SET_GPR_U32(ctx, 31, 0x29DBF8u);
    ctx->pc = 0x29DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBF0u;
            // 0x29dbf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBF8u; }
        if (ctx->pc != 0x29DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DBF8u; }
        if (ctx->pc != 0x29DBF8u) { return; }
    }
    ctx->pc = 0x29DBF8u;
label_29dbf8:
    // 0x29dbf8: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DBF8u;
    {
        const bool branch_taken_0x29dbf8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29DBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBF8u;
            // 0x29dbfc: 0x215082a  slt         $at, $s0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbf8) {
            ctx->pc = 0x29DC08u;
            goto label_29dc08;
        }
    }
    ctx->pc = 0x29DC00u;
    // 0x29dc00: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x29DC00u;
    {
        const bool branch_taken_0x29dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC00u;
            // 0x29dc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc00) {
            ctx->pc = 0x29DF8Cu;
            goto label_29df8c;
        }
    }
    ctx->pc = 0x29DC08u;
label_29dc08:
    // 0x29dc08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DC08u;
    {
        const bool branch_taken_0x29dc08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC08u;
            // 0x29dc0c: 0x15082a  slt         $at, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc08) {
            ctx->pc = 0x29DC18u;
            goto label_29dc18;
        }
    }
    ctx->pc = 0x29DC10u;
    // 0x29dc10: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x29dc10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc14: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x29dc14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_29dc18:
    // 0x29dc18: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x29DC18u;
    {
        const bool branch_taken_0x29dc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC18u;
            // 0x29dc1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc18) {
            ctx->pc = 0x29DCA0u;
            goto label_29dca0;
        }
    }
    ctx->pc = 0x29DC20u;
    // 0x29dc20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29dc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dc24:
    // 0x29dc24: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29dc28: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x29dc28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29dc2c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x29DC2Cu;
    {
        const bool branch_taken_0x29dc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC2Cu;
            // 0x29dc30: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc2c) {
            ctx->pc = 0x29DC90u;
            goto label_29dc90;
        }
    }
    ctx->pc = 0x29DC34u;
    // 0x29dc34: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x29dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x29dc38: 0x244800a0  addiu       $t0, $v0, 0xA0
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29dc3c: 0x244901a0  addiu       $t1, $v0, 0x1A0
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_29dc40:
    // 0x29dc40: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x29dc44: 0x244a00a0  addiu       $t2, $v0, 0xA0
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x29dc48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x29dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc4c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x29dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dc50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29dc50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dc54: 0x0  nop
    ctx->pc = 0x29dc54u;
    // NOP
    // 0x29dc58: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x29DC58u;
    {
        const bool branch_taken_0x29dc58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dc58) {
            ctx->pc = 0x29DC7Cu;
            goto label_29dc7c;
        }
    }
    ctx->pc = 0x29DC60u;
    // 0x29dc60: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x29dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29dc64: 0x244b01a0  addiu       $t3, $v0, 0x1A0
    ctx->pc = 0x29dc64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x29dc68: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x29dc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x29dc6c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x29dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x29dc70: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x29dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x29dc74: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x29dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x29dc78: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x29dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_29dc7c:
    // 0x29dc7c: 0x0  nop
    ctx->pc = 0x29dc7cu;
    // NOP
    // 0x29dc80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29dc84: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x29dc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29dc88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29DC88u;
    {
        const bool branch_taken_0x29dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC88u;
            // 0x29dc8c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc88) {
            ctx->pc = 0x29DC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dc40;
        }
    }
    ctx->pc = 0x29DC90u;
label_29dc90:
    // 0x29dc90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29dc94: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x29dc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29dc98: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29DC98u;
    {
        const bool branch_taken_0x29dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC98u;
            // 0x29dc9c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc98) {
            ctx->pc = 0x29DC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dc24;
        }
    }
    ctx->pc = 0x29DCA0u;
label_29dca0:
    // 0x29dca0: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x29dca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29dca4: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x29DCA4u;
    {
        const bool branch_taken_0x29dca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DCA4u;
            // 0x29dca8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dca4) {
            ctx->pc = 0x29DF84u;
            goto label_29df84;
        }
    }
    ctx->pc = 0x29DCACu;
    // 0x29dcac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29dcacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29dcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dcb4:
    // 0x29dcb4: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x29dcb8: 0x2f38821  addu        $s1, $s7, $s3
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x29dcbc: 0x8c5001a0  lw          $s0, 0x1A0($v0)
    ctx->pc = 0x29dcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x29dcc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29dcc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dcc8: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x29DCC8u;
    {
        const bool branch_taken_0x29dcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DCC8u;
            // 0x29dccc: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcc8) {
            ctx->pc = 0x29DDF4u;
            goto label_29ddf4;
        }
    }
    ctx->pc = 0x29DCD0u;
    // 0x29dcd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29dcd4: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x29DCD4u;
    {
        const bool branch_taken_0x29dcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DCD4u;
            // 0x29dcd8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcd4) {
            ctx->pc = 0x29DDF4u;
            goto label_29ddf4;
        }
    }
    ctx->pc = 0x29DCDCu;
    // 0x29dcdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DCDCu;
    {
        const bool branch_taken_0x29dcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29dcdc) {
            ctx->pc = 0x29DCECu;
            goto label_29dcec;
        }
    }
    ctx->pc = 0x29DCE4u;
    // 0x29dce4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x29DCE4u;
    {
        const bool branch_taken_0x29dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dce4) {
            ctx->pc = 0x29DF70u;
            goto label_29df70;
        }
    }
    ctx->pc = 0x29DCECu;
label_29dcec:
    // 0x29dcec: 0x0  nop
    ctx->pc = 0x29dcecu;
    // NOP
    // 0x29dcf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29dcf4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29dcf8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29dcfc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29dd00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29dd04: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x29dd08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29dd0c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29dd10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29dd14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x29dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29dd18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29dd1c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29dd20: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x29dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd24: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x29dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x29dd28: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x29dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd2c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x29dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_29dd30:
    // 0x29dd30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29dd34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29dd38: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29dd3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29dd40: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x29dd44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x29dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x29dd48: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29DD48u;
    {
        const bool branch_taken_0x29dd48 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x29DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD48u;
            // 0x29dd4c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd48) {
            ctx->pc = 0x29DD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dd30;
        }
    }
    ctx->pc = 0x29DD50u;
    // 0x29dd50: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x29dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29dd54: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x29dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x29dd58: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x29dd5c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x29dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x29dd60: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x29dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x29dd64: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x29dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x29dd68: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x29dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd6c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29dd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x29dd70: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x29dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd74: 0xc04e624  jal         func_139890
    ctx->pc = 0x29DD74u;
    SET_GPR_U32(ctx, 31, 0x29DD7Cu);
    ctx->pc = 0x29DD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD74u;
            // 0x29dd78: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DD7Cu; }
        if (ctx->pc != 0x29DD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DD7Cu; }
        if (ctx->pc != 0x29DD7Cu) { return; }
    }
    ctx->pc = 0x29DD7Cu;
label_29dd7c:
    // 0x29dd7c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x29dd80: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x29DD80u;
    SET_GPR_U32(ctx, 31, 0x29DD88u);
    ctx->pc = 0x29DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD80u;
            // 0x29dd84: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DD88u; }
        if (ctx->pc != 0x29DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DD88u; }
        if (ctx->pc != 0x29DD88u) { return; }
    }
    ctx->pc = 0x29DD88u;
label_29dd88:
    // 0x29dd88: 0xc6030180  lwc1        $f3, 0x180($s0)
    ctx->pc = 0x29dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29dd8c: 0xc6020184  lwc1        $f2, 0x184($s0)
    ctx->pc = 0x29dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29dd90: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x29dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dd94: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x29dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd98: 0xe6230180  swc1        $f3, 0x180($s1)
    ctx->pc = 0x29dd98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x29dd9c: 0xe6220184  swc1        $f2, 0x184($s1)
    ctx->pc = 0x29dd9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x29dda0: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x29dda0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x29dda4: 0xe620018c  swc1        $f0, 0x18C($s1)
    ctx->pc = 0x29dda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    // 0x29dda8: 0xc6030190  lwc1        $f3, 0x190($s0)
    ctx->pc = 0x29dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ddac: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x29ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ddb0: 0xc6010198  lwc1        $f1, 0x198($s0)
    ctx->pc = 0x29ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ddb4: 0xc600019c  lwc1        $f0, 0x19C($s0)
    ctx->pc = 0x29ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ddb8: 0xe6230190  swc1        $f3, 0x190($s1)
    ctx->pc = 0x29ddb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x29ddbc: 0xe6220194  swc1        $f2, 0x194($s1)
    ctx->pc = 0x29ddbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x29ddc0: 0xe6210198  swc1        $f1, 0x198($s1)
    ctx->pc = 0x29ddc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x29ddc4: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x29ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x29ddc8: 0xc60301a0  lwc1        $f3, 0x1A0($s0)
    ctx->pc = 0x29ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ddcc: 0xc60201a4  lwc1        $f2, 0x1A4($s0)
    ctx->pc = 0x29ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ddd0: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x29ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ddd4: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x29ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ddd8: 0xe62301a0  swc1        $f3, 0x1A0($s1)
    ctx->pc = 0x29ddd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x29dddc: 0xe62201a4  swc1        $f2, 0x1A4($s1)
    ctx->pc = 0x29dddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x29dde0: 0xe62101a8  swc1        $f1, 0x1A8($s1)
    ctx->pc = 0x29dde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x29dde4: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x29dde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x29dde8: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x29dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x29ddec: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x29DDECu;
    {
        const bool branch_taken_0x29ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDECu;
            // 0x29ddf0: 0xae2201b0  sw          $v0, 0x1B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddec) {
            ctx->pc = 0x29DF70u;
            goto label_29df70;
        }
    }
    ctx->pc = 0x29DDF4u;
label_29ddf4:
    // 0x29ddf4: 0x0  nop
    ctx->pc = 0x29ddf4u;
    // NOP
    // 0x29ddf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ddfc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x29ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29de00: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x29de00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29de04: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29de08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29de08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29de0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29de10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29de10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x29de14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29de18: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29de18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29de1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29de20: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x29de20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29de24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29de28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29de28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29de2c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x29de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de30: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x29de30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x29de34: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x29de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de38: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x29de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x29de3c: 0x0  nop
    ctx->pc = 0x29de3cu;
    // NOP
label_29de40:
    // 0x29de40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29de44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29de48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x29de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29de4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29de50: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x29de50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x29de54: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x29de54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x29de58: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29DE58u;
    {
        const bool branch_taken_0x29de58 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x29DE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE58u;
            // 0x29de5c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de58) {
            ctx->pc = 0x29DE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29de40;
        }
    }
    ctx->pc = 0x29DE60u;
    // 0x29de60: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29de64: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x29de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x29de68: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x29de6c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x29de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x29de70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x29de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x29de74: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x29de74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x29de78: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x29de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de7c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x29de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x29de80: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x29de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29de84: 0xc04e624  jal         func_139890
    ctx->pc = 0x29DE84u;
    SET_GPR_U32(ctx, 31, 0x29DE8Cu);
    ctx->pc = 0x29DE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE84u;
            // 0x29de88: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE8Cu; }
        if (ctx->pc != 0x29DE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE8Cu; }
        if (ctx->pc != 0x29DE8Cu) { return; }
    }
    ctx->pc = 0x29DE8Cu;
label_29de8c:
    // 0x29de8c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x29de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x29de90: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x29DE90u;
    SET_GPR_U32(ctx, 31, 0x29DE98u);
    ctx->pc = 0x29DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE90u;
            // 0x29de94: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE98u; }
        if (ctx->pc != 0x29DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE98u; }
        if (ctx->pc != 0x29DE98u) { return; }
    }
    ctx->pc = 0x29DE98u;
label_29de98:
    // 0x29de98: 0xc6030180  lwc1        $f3, 0x180($s0)
    ctx->pc = 0x29de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29de9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29dea0: 0xc6020184  lwc1        $f2, 0x184($s0)
    ctx->pc = 0x29dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29dea4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x29dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29dea8: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x29dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29deac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29deb0: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x29deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29deb4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29deb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29debc: 0xe6230180  swc1        $f3, 0x180($s1)
    ctx->pc = 0x29debcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x29dec0: 0xe6220184  swc1        $f2, 0x184($s1)
    ctx->pc = 0x29dec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x29dec4: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x29dec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x29dec8: 0xe620018c  swc1        $f0, 0x18C($s1)
    ctx->pc = 0x29dec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    // 0x29decc: 0xc6030190  lwc1        $f3, 0x190($s0)
    ctx->pc = 0x29deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29ded0: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x29ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29ded4: 0xc6010198  lwc1        $f1, 0x198($s0)
    ctx->pc = 0x29ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ded8: 0xc600019c  lwc1        $f0, 0x19C($s0)
    ctx->pc = 0x29ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dedc: 0xe6230190  swc1        $f3, 0x190($s1)
    ctx->pc = 0x29dedcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x29dee0: 0xe6220194  swc1        $f2, 0x194($s1)
    ctx->pc = 0x29dee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x29dee4: 0xe6210198  swc1        $f1, 0x198($s1)
    ctx->pc = 0x29dee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x29dee8: 0xe620019c  swc1        $f0, 0x19C($s1)
    ctx->pc = 0x29dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x29deec: 0xc60301a0  lwc1        $f3, 0x1A0($s0)
    ctx->pc = 0x29deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29def0: 0xc60201a4  lwc1        $f2, 0x1A4($s0)
    ctx->pc = 0x29def0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29def4: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x29def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29def8: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x29def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29defc: 0xe62301a0  swc1        $f3, 0x1A0($s1)
    ctx->pc = 0x29defcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x29df00: 0xe62201a4  swc1        $f2, 0x1A4($s1)
    ctx->pc = 0x29df00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x29df04: 0xe62101a8  swc1        $f1, 0x1A8($s1)
    ctx->pc = 0x29df04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x29df08: 0xe62001ac  swc1        $f0, 0x1AC($s1)
    ctx->pc = 0x29df08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x29df0c: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x29df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x29df10: 0xae2201b0  sw          $v0, 0x1B0($s1)
    ctx->pc = 0x29df10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 2));
    // 0x29df14: 0xc041c4a  jal         func_107128
    ctx->pc = 0x29DF14u;
    SET_GPR_U32(ctx, 31, 0x29DF1Cu);
    ctx->pc = 0x29DF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF14u;
            // 0x29df18: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF1Cu; }
        if (ctx->pc != 0x29DF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF1Cu; }
        if (ctx->pc != 0x29DF1Cu) { return; }
    }
    ctx->pc = 0x29DF1Cu;
label_29df1c:
    // 0x29df1c: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x29df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29df20: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x29df24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29df24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29df28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29df2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df30: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x29df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x29df34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29df34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29df38: 0x0  nop
    ctx->pc = 0x29df38u;
    // NOP
    // 0x29df3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29df3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29df40: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x29df44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x29df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x29df48: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x29df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x29df4c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x29df4cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x29df50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29df50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29df54: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x29df54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29df58: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x29df58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x29df5c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x29df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x29df60: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x29df60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x29df64: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x29df64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x29df68: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x29df68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x29df6c: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x29df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_29df70:
    // 0x29df70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29df70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29df74: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x29df74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29df78: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x29df78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x29df7c: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x29DF7Cu;
    {
        const bool branch_taken_0x29df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DF7Cu;
            // 0x29df80: 0x267301c0  addiu       $s3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df7c) {
            ctx->pc = 0x29DCB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dcb4;
        }
    }
    ctx->pc = 0x29DF84u;
label_29df84:
    // 0x29df84: 0x0  nop
    ctx->pc = 0x29df84u;
    // NOP
    // 0x29df88: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x29df88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29df8c:
    // 0x29df8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29df90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29df90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29df94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29df94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29df98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29df98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29df9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29df9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29dfa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29dfa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29dfa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29dfa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dfa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29dfa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dfac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29dfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dfb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x29DFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DFB4u;
            // 0x29dfb8: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DFBCu;
}
