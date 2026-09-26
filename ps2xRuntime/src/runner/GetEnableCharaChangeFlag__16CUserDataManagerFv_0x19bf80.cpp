#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEnableCharaChangeFlag__16CUserDataManagerFv
// Address: 0x19bf80 - 0x19c054
void GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80");
#endif

    switch (ctx->pc) {
        case 0x19bf94u: goto label_19bf94;
        case 0x19bfd0u: goto label_19bfd0;
        case 0x19c008u: goto label_19c008;
        default: break;
    }

    ctx->pc = 0x19bf80u;

    // 0x19bf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bf84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bf88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bf8c: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x19BF8Cu;
    SET_GPR_U32(ctx, 31, 0x19BF94u);
    ctx->pc = 0x19BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF8Cu;
            // 0x19bf90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF94u; }
        if (ctx->pc != 0x19BF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF94u; }
        if (ctx->pc != 0x19BF94u) { return; }
    }
    ctx->pc = 0x19BF94u;
label_19bf94:
    // 0x19bf94: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bf98: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x19bf9c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x19bf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x19bfa0: 0x246362f0  addiu       $v1, $v1, 0x62F0
    ctx->pc = 0x19bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25328));
    // 0x19bfa4: 0x94264d92  lhu         $a2, 0x4D92($at)
    ctx->pc = 0x19bfa4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19858)));
    // 0x19bfa8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x19bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19bfac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19bfacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bfb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19bfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfb8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bfbc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x19bfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x19bfc0: 0x90254d94  lbu         $a1, 0x4D94($at)
    ctx->pc = 0x19bfc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19860)));
    // 0x19bfc4: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x19bfc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x19bfc8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19bfcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bfd0:
    // 0x19bfd0: 0x11d1821  addu        $v1, $t0, $sp
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x19bfd4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x19bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19bfd8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x19bfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19bfdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BFDCu;
    {
        const bool branch_taken_0x19bfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFDCu;
            // 0x19bfe0: 0xe41804  sllv        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfdc) {
            ctx->pc = 0x19BFECu;
            goto label_19bfec;
        }
    }
    ctx->pc = 0x19BFE4u;
    // 0x19bfe4: 0x601827  not         $v1, $v1
    ctx->pc = 0x19bfe4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x19bfe8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19bfe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_19bfec:
    // 0x19bfec: 0x0  nop
    ctx->pc = 0x19bfecu;
    // NOP
    // 0x19bff0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19bff4: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x19bff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19bff8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x19BFF8u;
    {
        const bool branch_taken_0x19bff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFF8u;
            // 0x19bffc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bff8) {
            ctx->pc = 0x19BFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19bfd0;
        }
    }
    ctx->pc = 0x19C000u;
    // 0x19c000: 0xc06421c  jal         func_190870
    ctx->pc = 0x19C000u;
    SET_GPR_U32(ctx, 31, 0x19C008u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C008u; }
        if (ctx->pc != 0x19C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C008u; }
        if (ctx->pc != 0x19C008u) { return; }
    }
    ctx->pc = 0x19C008u;
label_19c008:
    // 0x19c008: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x19c00c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19C00Cu;
    {
        const bool branch_taken_0x19c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c00c) {
            ctx->pc = 0x19C040u;
            goto label_19c040;
        }
    }
    ctx->pc = 0x19C014u;
    // 0x19c014: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x19c014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19c018: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19c01c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C01Cu;
    {
        const bool branch_taken_0x19c01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C01Cu;
            // 0x19c020: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c01c) {
            ctx->pc = 0x19C030u;
            goto label_19c030;
        }
    }
    ctx->pc = 0x19C024u;
    // 0x19c024: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x19c028: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x19c028u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x19c02c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x19c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_19c030:
    // 0x19c030: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C030u;
    {
        const bool branch_taken_0x19c030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C030u;
            // 0x19c034: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c030) {
            ctx->pc = 0x19C044u;
            goto label_19c044;
        }
    }
    ctx->pc = 0x19C038u;
    // 0x19c038: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x19c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x19c03c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x19c03cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_19c040:
    // 0x19c040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c044:
    // 0x19c044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c04c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C04Cu;
            // 0x19c050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C054u;
}
