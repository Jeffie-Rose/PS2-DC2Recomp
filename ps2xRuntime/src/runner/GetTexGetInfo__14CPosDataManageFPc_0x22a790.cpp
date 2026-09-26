#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTexGetInfo__14CPosDataManageFPc
// Address: 0x22a790 - 0x22a834
void GetTexGetInfo__14CPosDataManageFPc_0x22a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTexGetInfo__14CPosDataManageFPc_0x22a790");
#endif

    switch (ctx->pc) {
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7e4u: goto label_22a7e4;
        default: break;
    }

    ctx->pc = 0x22a790u;

    // 0x22a790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a794: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a7a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a7a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7ac: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A7ACu;
    {
        const bool branch_taken_0x22a7ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7ACu;
            // 0x22a7b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7ac) {
            ctx->pc = 0x22A7BCu;
            goto label_22a7bc;
        }
    }
    ctx->pc = 0x22A7B4u;
    // 0x22a7b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22A7B4u;
    {
        const bool branch_taken_0x22a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7B4u;
            // 0x22a7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7b4) {
            ctx->pc = 0x22A818u;
            goto label_22a818;
        }
    }
    ctx->pc = 0x22A7BCu;
label_22a7bc:
    // 0x22a7bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22A7C0u;
    {
        const bool branch_taken_0x22a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7C0u;
            // 0x22a7c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7c0) {
            ctx->pc = 0x22A804u;
            goto label_22a804;
        }
    }
    ctx->pc = 0x22A7C8u;
label_22a7c8:
    // 0x22a7c8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22a7cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22a7d0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x22a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22a7d4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A7D4u;
    {
        const bool branch_taken_0x22a7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7D4u;
            // 0x22a7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7d4) {
            ctx->pc = 0x22A7FCu;
            goto label_22a7fc;
        }
    }
    ctx->pc = 0x22A7DCu;
    // 0x22a7dc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22A7DCu;
    SET_GPR_U32(ctx, 31, 0x22A7E4u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
        if (ctx->pc != 0x22A7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
        if (ctx->pc != 0x22A7E4u) { return; }
    }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A7E4u;
    {
        const bool branch_taken_0x22a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a7e4) {
            ctx->pc = 0x22A7FCu;
            goto label_22a7fc;
        }
    }
    ctx->pc = 0x22A7ECu;
    // 0x22a7ec: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22a7f0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x22a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x22a7f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22A7F4u;
    {
        const bool branch_taken_0x22a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A7F4u;
            // 0x22a7f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a7f4) {
            ctx->pc = 0x22A818u;
            goto label_22a818;
        }
    }
    ctx->pc = 0x22A7FCu;
label_22a7fc:
    // 0x22a7fc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22a800: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a804:
    // 0x22a804: 0x0  nop
    ctx->pc = 0x22a804u;
    // NOP
    // 0x22a808: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x22a808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22a80c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22a80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a810: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22A810u;
    {
        const bool branch_taken_0x22a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A810u;
            // 0x22a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a810) {
            ctx->pc = 0x22A7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a7c8;
        }
    }
    ctx->pc = 0x22A818u;
label_22a818:
    // 0x22a818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a81c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A82Cu;
            // 0x22a830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A834u;
}
