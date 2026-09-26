#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWin__6ClsMesFPcii
// Address: 0x158e30 - 0x158ff8
void MakeMesWin__6ClsMesFPcii_0x158e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWin__6ClsMesFPcii_0x158e30");
#endif

    switch (ctx->pc) {
        case 0x158e60u: goto label_158e60;
        case 0x158e74u: goto label_158e74;
        case 0x158e84u: goto label_158e84;
        case 0x158eb8u: goto label_158eb8;
        case 0x158ee8u: goto label_158ee8;
        case 0x158f50u: goto label_158f50;
        case 0x158fd0u: goto label_158fd0;
        default: break;
    }

    ctx->pc = 0x158e30u;

    // 0x158e30: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x158e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x158e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x158e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x158e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158e40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x158e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158e48: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x158e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e4c: 0x10a00064  beqz        $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x158E4Cu;
    {
        const bool branch_taken_0x158e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E4Cu;
            // 0x158e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e4c) {
            ctx->pc = 0x158FE0u;
            goto label_158fe0;
        }
    }
    ctx->pc = 0x158E54u;
    // 0x158e54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x158e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e58: 0xc05634c  jal         func_158D30
    ctx->pc = 0x158E58u;
    SET_GPR_U32(ctx, 31, 0x158E60u);
    ctx->pc = 0x158E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E58u;
            // 0x158e5c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158D30u;
    if (runtime->hasFunction(0x158D30u)) {
        auto targetFn = runtime->lookupFunction(0x158D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E60u; }
        if (ctx->pc != 0x158E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreMesMake__FPcPc_0x158d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E60u; }
        if (ctx->pc != 0x158E60u) { return; }
    }
    ctx->pc = 0x158E60u;
label_158e60:
    // 0x158e60: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e68: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x158e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x158e6c: 0xc056280  jal         func_158A00
    ctx->pc = 0x158E6Cu;
    SET_GPR_U32(ctx, 31, 0x158E74u);
    ctx->pc = 0x158E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E6Cu;
            // 0x158e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158A00u;
    if (runtime->hasFunction(0x158A00u)) {
        auto targetFn = runtime->lookupFunction(0x158A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E74u; }
        if (ctx->pc != 0x158E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin_init__6ClsMesFi_0x158a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E74u; }
        if (ctx->pc != 0x158E74u) { return; }
    }
    ctx->pc = 0x158E74u;
label_158e74:
    // 0x158e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e78: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158e7c: 0xc055e78  jal         func_1579E0
    ctx->pc = 0x158E7Cu;
    SET_GPR_U32(ctx, 31, 0x158E84u);
    ctx->pc = 0x158E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158E7Cu;
            // 0x158e80: 0xae12018c  sw          $s2, 0x18C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1579E0u;
    if (runtime->hasFunction(0x1579E0u)) {
        auto targetFn = runtime->lookupFunction(0x1579E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E84u; }
        if (ctx->pc != 0x158E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NeedMesWinWH__6ClsMesFPc_0x1579e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E84u; }
        if (ctx->pc != 0x158E84u) { return; }
    }
    ctx->pc = 0x158E84u;
label_158e84:
    // 0x158e84: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x158e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158e88: 0x2841002d  slti        $at, $v0, 0x2D
    ctx->pc = 0x158e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x158e8c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158E8Cu;
    {
        const bool branch_taken_0x158e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e8c) {
            ctx->pc = 0x158EA0u;
            goto label_158ea0;
        }
    }
    ctx->pc = 0x158E94u;
    // 0x158e94: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x158e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x158e98: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x158E98u;
    {
        const bool branch_taken_0x158e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158E98u;
            // 0x158e9c: 0xae020144  sw          $v0, 0x144($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e98) {
            ctx->pc = 0x158FB8u;
            goto label_158fb8;
        }
    }
    ctx->pc = 0x158EA0u;
label_158ea0:
    // 0x158ea0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x158ea4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x158ea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ea8: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x158ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x158eac: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x158eb0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x158EB0u;
    {
        const bool branch_taken_0x158eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EB0u;
            // 0x158eb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158eb0) {
            ctx->pc = 0x158F94u;
            goto label_158f94;
        }
    }
    ctx->pc = 0x158EB8u;
label_158eb8:
    // 0x158eb8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158EB8u;
    {
        const bool branch_taken_0x158eb8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x158EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EB8u;
            // 0x158ebc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158eb8) {
            ctx->pc = 0x158EC8u;
            goto label_158ec8;
        }
    }
    ctx->pc = 0x158EC0u;
    // 0x158ec0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x158EC0u;
    {
        const bool branch_taken_0x158ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ec0) {
            ctx->pc = 0x158F70u;
            goto label_158f70;
        }
    }
    ctx->pc = 0x158EC8u;
label_158ec8:
    // 0x158ec8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x158ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x158ecc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x158eccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ed0: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x158ED0u;
    {
        const bool branch_taken_0x158ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158ED0u;
            // 0x158ed4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ed0) {
            ctx->pc = 0x158F6Cu;
            goto label_158f6c;
        }
    }
    ctx->pc = 0x158ED8u;
    // 0x158ed8: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x158ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x158edc: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x158EDCu;
    {
        const bool branch_taken_0x158edc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158EDCu;
            // 0x158ee0: 0x256efff9  addiu       $t6, $t3, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158edc) {
            ctx->pc = 0x158F3Cu;
            goto label_158f3c;
        }
    }
    ctx->pc = 0x158EE4u;
    // 0x158ee4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x158ee4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158ee8:
    // 0x158ee8: 0x20fc021  addu        $t8, $s0, $t7
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x158eec: 0x8f0500e8  lw          $a1, 0xE8($t8)
    ctx->pc = 0x158eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x158ef0: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x158ef0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x158ef4: 0x8f0400ec  lw          $a0, 0xEC($t8)
    ctx->pc = 0x158ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 236)));
    // 0x158ef8: 0x18e102a  slt         $v0, $t4, $t6
    ctx->pc = 0x158ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x158efc: 0x8f0900f0  lw          $t1, 0xF0($t8)
    ctx->pc = 0x158efcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 240)));
    // 0x158f00: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x158f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x158f04: 0x8f0800f4  lw          $t0, 0xF4($t8)
    ctx->pc = 0x158f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 244)));
    // 0x158f08: 0x8f0700f8  lw          $a3, 0xF8($t8)
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 248)));
    // 0x158f0c: 0x8f0600fc  lw          $a2, 0xFC($t8)
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 252)));
    // 0x158f10: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x158f10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x158f14: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x158f14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x158f18: 0x8f050100  lw          $a1, 0x100($t8)
    ctx->pc = 0x158f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 256)));
    // 0x158f1c: 0x8f040104  lw          $a0, 0x104($t8)
    ctx->pc = 0x158f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 260)));
    // 0x158f20: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x158f24: 0x1a86821  addu        $t5, $t5, $t0
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x158f28: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x158f28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x158f2c: 0x1a66821  addu        $t5, $t5, $a2
    ctx->pc = 0x158f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x158f30: 0x1a56821  addu        $t5, $t5, $a1
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x158f34: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x158F34u;
    {
        const bool branch_taken_0x158f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F34u;
            // 0x158f38: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f34) {
            ctx->pc = 0x158EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158ee8;
        }
    }
    ctx->pc = 0x158F3Cu;
label_158f3c:
    // 0x158f3c: 0x0  nop
    ctx->pc = 0x158f3cu;
    // NOP
    // 0x158f40: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x158f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x158f44: 0x185082a  slt         $at, $t4, $a1
    ctx->pc = 0x158f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x158f48: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x158F48u;
    {
        const bool branch_taken_0x158f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F48u;
            // 0x158f4c: 0xc3080  sll         $a2, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f48) {
            ctx->pc = 0x158F6Cu;
            goto label_158f6c;
        }
    }
    ctx->pc = 0x158F50u;
label_158f50:
    // 0x158f50: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x158f54: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x158f58: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x158f58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x158f5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x158f60: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x158f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x158f64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x158F64u;
    {
        const bool branch_taken_0x158f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F64u;
            // 0x158f68: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f64) {
            ctx->pc = 0x158F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158f50;
        }
    }
    ctx->pc = 0x158F6Cu;
label_158f6c:
    // 0x158f6c: 0x0  nop
    ctx->pc = 0x158f6cu;
    // NOP
label_158f70:
    // 0x158f70: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x158f74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x158f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158f78: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x158f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x158f7c: 0x8c421e10  lw          $v0, 0x1E10($v0)
    ctx->pc = 0x158f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7696)));
    // 0x158f80: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x158f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x158f84: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F84u;
    {
        const bool branch_taken_0x158f84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158f84) {
            ctx->pc = 0x158F90u;
            goto label_158f90;
        }
    }
    ctx->pc = 0x158F8Cu;
    // 0x158f8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x158f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158f90:
    // 0x158f90: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x158f90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_158f94:
    // 0x158f94: 0x0  nop
    ctx->pc = 0x158f94u;
    // NOP
    // 0x158f98: 0x163102a  slt         $v0, $t3, $v1
    ctx->pc = 0x158f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x158f9c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x158F9Cu;
    {
        const bool branch_taken_0x158f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158F9Cu;
            // 0x158fa0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f9c) {
            ctx->pc = 0x158EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158eb8;
        }
    }
    ctx->pc = 0x158FA4u;
    // 0x158fa4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x158FA4u;
    {
        const bool branch_taken_0x158fa4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fa4) {
            ctx->pc = 0x158FB8u;
            goto label_158fb8;
        }
    }
    ctx->pc = 0x158FACu;
    // 0x158fac: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x158fb0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x158fb4: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x158fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_158fb8:
    // 0x158fb8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x158fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158fc4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x158fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x158fc8: 0xc055b0c  jal         func_156C30
    ctx->pc = 0x158FC8u;
    SET_GPR_U32(ctx, 31, 0x158FD0u);
    ctx->pc = 0x158FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158FC8u;
            // 0x158fcc: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156C30u;
    if (runtime->hasFunction(0x156C30u)) {
        auto targetFn = runtime->lookupFunction(0x156C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FD0u; }
        if (ctx->pc != 0x158FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl__6ClsMesFPc_0x156c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158FD0u; }
        if (ctx->pc != 0x158FD0u) { return; }
    }
    ctx->pc = 0x158FD0u;
label_158fd0:
    // 0x158fd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158FD0u;
    {
        const bool branch_taken_0x158fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fd0) {
            ctx->pc = 0x158FE0u;
            goto label_158fe0;
        }
    }
    ctx->pc = 0x158FD8u;
    // 0x158fd8: 0x8e0317c0  lw          $v1, 0x17C0($s0)
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x158fdc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x158fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_158fe0:
    // 0x158fe0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x158fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x158FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158FF0u;
            // 0x158ff4: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158FF8u;
}
