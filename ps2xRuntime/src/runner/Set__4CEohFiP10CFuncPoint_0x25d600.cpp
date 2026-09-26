#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__4CEohFiP10CFuncPoint
// Address: 0x25d600 - 0x25d648
void Set__4CEohFiP10CFuncPoint_0x25d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__4CEohFiP10CFuncPoint_0x25d600");
#endif

    ctx->pc = 0x25d600u;

    // 0x25d600: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D600u;
    {
        const bool branch_taken_0x25d600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D600u;
            // 0x25d604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d600) {
            ctx->pc = 0x25D610u;
            goto label_25d610;
        }
    }
    ctx->pc = 0x25D608u;
    // 0x25d608: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25D608u;
    {
        const bool branch_taken_0x25d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d608) {
            ctx->pc = 0x25D640u;
            goto label_25d640;
        }
    }
    ctx->pc = 0x25D610u;
label_25d610:
    // 0x25d610: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x25d610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x25d614: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25d618: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d61c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D62Cu;
            goto label_25d62c;
        }
    }
    ctx->pc = 0x25D624u;
    // 0x25d624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D624u;
    {
        const bool branch_taken_0x25d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D624u;
            // 0x25d628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d624) {
            ctx->pc = 0x25D634u;
            goto label_25d634;
        }
    }
    ctx->pc = 0x25D62Cu;
label_25d62c:
    // 0x25d62c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D62Cu;
    {
        const bool branch_taken_0x25d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D62Cu;
            // 0x25d630: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d62c) {
            ctx->pc = 0x25D63Cu;
            goto label_25d63c;
        }
    }
    ctx->pc = 0x25D634u;
label_25d634:
    // 0x25d634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D634u;
    {
        const bool branch_taken_0x25d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d634) {
            ctx->pc = 0x25D640u;
            goto label_25d640;
        }
    }
    ctx->pc = 0x25D63Cu;
label_25d63c:
    // 0x25d63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d640:
    // 0x25d640: 0x3e00008  jr          $ra
    ctx->pc = 0x25D640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D648u;
}
