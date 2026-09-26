#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckViewWeaponStatus__13CMenuItemInfoFi
// Address: 0x240630 - 0x24068c
void CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630");
#endif

    switch (ctx->pc) {
        case 0x240678u: goto label_240678;
        default: break;
    }

    ctx->pc = 0x240630u;

    // 0x240630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24063c: 0x93839680  lbu         $v1, -0x6980($gp)
    ctx->pc = 0x24063cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940288)));
    // 0x240640: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x240640u;
    {
        const bool branch_taken_0x240640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240640u;
            // 0x240644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240640) {
            ctx->pc = 0x24067Cu;
            goto label_24067c;
        }
    }
    ctx->pc = 0x240648u;
    // 0x240648: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240648u;
    {
        const bool branch_taken_0x240648 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x240648) {
            ctx->pc = 0x24065Cu;
            goto label_24065c;
        }
    }
    ctx->pc = 0x240650u;
    // 0x240650: 0x8f839688  lw          $v1, -0x6978($gp)
    ctx->pc = 0x240650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940296)));
    // 0x240654: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x240654u;
    {
        const bool branch_taken_0x240654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240654u;
            // 0x240658: 0xae03017c  sw          $v1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240654) {
            ctx->pc = 0x24067Cu;
            goto label_24067c;
        }
    }
    ctx->pc = 0x24065Cu;
label_24065c:
    // 0x24065c: 0x8f8594f8  lw          $a1, -0x6B08($gp)
    ctx->pc = 0x24065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240660: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x240664: 0x24a400c0  addiu       $a0, $a1, 0xC0
    ctx->pc = 0x240664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x240668: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240668u;
    {
        const bool branch_taken_0x240668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240668u;
            // 0x24066c: 0x24a4012c  addiu       $a0, $a1, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240668) {
            ctx->pc = 0x24067Cu;
            goto label_24067c;
        }
    }
    ctx->pc = 0x240670u;
    // 0x240670: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x240670u;
    SET_GPR_U32(ctx, 31, 0x240678u);
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240678u; }
        if (ctx->pc != 0x240678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240678u; }
        if (ctx->pc != 0x240678u) { return; }
    }
    ctx->pc = 0x240678u;
label_240678:
    // 0x240678: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x240678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_24067c:
    // 0x24067c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240684: 0x3e00008  jr          $ra
    ctx->pc = 0x240684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240684u;
            // 0x240688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24068Cu;
}
