#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlaceParts__4CMapFPc
// Address: 0x15d420 - 0x15d4bc
void GetPlaceParts__4CMapFPc_0x15d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlaceParts__4CMapFPc_0x15d420");
#endif

    switch (ctx->pc) {
        case 0x15d44cu: goto label_15d44c;
        case 0x15d460u: goto label_15d460;
        default: break;
    }

    ctx->pc = 0x15d420u;

    // 0x15d420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15d428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d42c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15d430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15d438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d444: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15D444u;
    {
        const bool branch_taken_0x15d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D444u;
            // 0x15d448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d444) {
            ctx->pc = 0x15D490u;
            goto label_15d490;
        }
    }
    ctx->pc = 0x15D44Cu;
label_15d44c:
    // 0x15d44c: 0x8e62032c  lw          $v0, 0x32C($s3)
    ctx->pc = 0x15d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 812)));
    // 0x15d450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d454: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15d458: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x15D458u;
    SET_GPR_U32(ctx, 31, 0x15D460u);
    ctx->pc = 0x15D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D458u;
            // 0x15d45c: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D460u; }
        if (ctx->pc != 0x15D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D460u; }
        if (ctx->pc != 0x15D460u) { return; }
    }
    ctx->pc = 0x15D460u;
label_15d460:
    // 0x15d460: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D460u;
    {
        const bool branch_taken_0x15d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d460) {
            ctx->pc = 0x15D488u;
            goto label_15d488;
        }
    }
    ctx->pc = 0x15D468u;
    // 0x15d468: 0x8e62032c  lw          $v0, 0x32C($s3)
    ctx->pc = 0x15d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 812)));
    // 0x15d46c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15d470: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15d474: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15d474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15d478: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15d478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d47c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15d480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D480u;
    {
        const bool branch_taken_0x15d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D480u;
            // 0x15d484: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d480) {
            ctx->pc = 0x15D4A0u;
            goto label_15d4a0;
        }
    }
    ctx->pc = 0x15D488u;
label_15d488:
    // 0x15d488: 0x26310310  addiu       $s1, $s1, 0x310
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x15d48c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15d490:
    // 0x15d490: 0x8e620330  lw          $v0, 0x330($s3)
    ctx->pc = 0x15d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 816)));
    // 0x15d494: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15d494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15d498: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15D498u;
    {
        const bool branch_taken_0x15d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D498u;
            // 0x15d49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d498) {
            ctx->pc = 0x15D44Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d44c;
        }
    }
    ctx->pc = 0x15D4A0u;
label_15d4a0:
    // 0x15d4a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d4a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d4a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d4a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d4a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d4ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4B4u;
            // 0x15d4b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D4BCu;
}
