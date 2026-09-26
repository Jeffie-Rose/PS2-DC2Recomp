#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryBodyCol__12CActionCharaFif
// Address: 0x16a620 - 0x16a6ac
void EntryBodyCol__12CActionCharaFif_0x16a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryBodyCol__12CActionCharaFif_0x16a620");
#endif

    switch (ctx->pc) {
        case 0x16a65cu: goto label_16a65c;
        default: break;
    }

    ctx->pc = 0x16a620u;

    // 0x16a620: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A620u;
    {
        const bool branch_taken_0x16a620 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A620u;
            // 0x16a624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a620) {
            ctx->pc = 0x16A638u;
            goto label_16a638;
        }
    }
    ctx->pc = 0x16A628u;
    // 0x16a628: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x16a628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16a62c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A62Cu;
    {
        const bool branch_taken_0x16a62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A62Cu;
            // 0x16a630: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a62c) {
            ctx->pc = 0x16A640u;
            goto label_16a640;
        }
    }
    ctx->pc = 0x16A634u;
    // 0x16a634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a638:
    // 0x16a638: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A638u;
    {
        const bool branch_taken_0x16a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a638) {
            ctx->pc = 0x16A6A4u;
            goto label_16a6a4;
        }
    }
    ctx->pc = 0x16A640u;
label_16a640:
    // 0x16a640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16a644: 0x8c420c00  lw          $v0, 0xC00($v0)
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x16a648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A648u;
    {
        const bool branch_taken_0x16a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A648u;
            // 0x16a64c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a648) {
            ctx->pc = 0x16A658u;
            goto label_16a658;
        }
    }
    ctx->pc = 0x16A650u;
    // 0x16a650: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16A650u;
    {
        const bool branch_taken_0x16a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A650u;
            // 0x16a654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a650) {
            ctx->pc = 0x16A6A4u;
            goto label_16a6a4;
        }
    }
    ctx->pc = 0x16A658u;
label_16a658:
    // 0x16a658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a65c:
    // 0x16a65c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x16a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16a660: 0x8c420d00  lw          $v0, 0xD00($v0)
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
    // 0x16a664: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A664u;
            // 0x16a668: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16A690u;
            goto label_16a690;
        }
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a674: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a678: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16a67c: 0xac660d00  sw          $a2, 0xD00($v1)
    ctx->pc = 0x16a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3328), GPR_U32(ctx, 6));
    // 0x16a680: 0x24620d00  addiu       $v0, $v1, 0xD00
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x16a684: 0xac650d04  sw          $a1, 0xD04($v1)
    ctx->pc = 0x16a684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3332), GPR_U32(ctx, 5));
    // 0x16a688: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A688u;
    {
        const bool branch_taken_0x16a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A688u;
            // 0x16a68c: 0xe46c0d08  swc1        $f12, 0xD08($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a688) {
            ctx->pc = 0x16A6A4u;
            goto label_16a6a4;
        }
    }
    ctx->pc = 0x16A690u;
label_16a690:
    // 0x16a690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a694: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x16a694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16a698: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A698u;
            // 0x16a69c: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a65c;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6a4:
    // 0x16a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A6ACu;
}
