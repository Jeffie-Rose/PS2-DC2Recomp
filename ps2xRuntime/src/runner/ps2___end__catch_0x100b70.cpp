#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __end__catch
// Address: 0x100b70 - 0x100ba4
void ps2___end__catch_0x100b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___end__catch_0x100b70");
#endif

    switch (ctx->pc) {
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        case 0x100b8cu: goto label_100b8c;
        case 0x100b90u: goto label_100b90;
        case 0x100b94u: goto label_100b94;
        case 0x100b98u: goto label_100b98;
        case 0x100b9cu: goto label_100b9c;
        case 0x100ba0u: goto label_100ba0;
        default: break;
    }

    ctx->pc = 0x100b70u;

label_100b70:
    // 0x100b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100b74:
    // 0x100b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_100b78:
    // 0x100b78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100b7c:
    // 0x100b7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_100b80:
    if (ctx->pc == 0x100B80u) {
        ctx->pc = 0x100B84u;
        goto label_100b84;
    }
    ctx->pc = 0x100B7Cu;
    {
        const bool branch_taken_0x100b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b7c) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100B84u;
label_100b84:
    // 0x100b84: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x100b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_100b88:
    // 0x100b88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_100b8c:
    if (ctx->pc == 0x100B8Cu) {
        ctx->pc = 0x100B8Cu;
            // 0x100b8c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100B90u;
        goto label_100b90;
    }
    ctx->pc = 0x100B88u;
    {
        const bool branch_taken_0x100b88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B88u;
            // 0x100b8c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b88) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100B90u;
label_100b90:
    // 0x100b90: 0xc0f809  jalr        $a2
label_100b94:
    if (ctx->pc == 0x100B94u) {
        ctx->pc = 0x100B94u;
            // 0x100b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x100B98u;
        goto label_100b98;
    }
    ctx->pc = 0x100B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x100B98u);
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B90u;
            // 0x100b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100B98u; }
            if (ctx->pc != 0x100B98u) { return; }
        }
        }
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100b9c:
    // 0x100b9c: 0x3e00008  jr          $ra
label_100ba0:
    if (ctx->pc == 0x100BA0u) {
        ctx->pc = 0x100BA0u;
            // 0x100ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x100BA4u;
        goto label_fallthrough_0x100b9c;
    }
    ctx->pc = 0x100B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B9Cu;
            // 0x100ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x100b9c:
    ctx->pc = 0x100BA4u;
}
