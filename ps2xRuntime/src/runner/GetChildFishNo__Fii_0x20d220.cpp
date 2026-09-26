#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetChildFishNo__Fii
// Address: 0x20d220 - 0x20d2c4
void GetChildFishNo__Fii_0x20d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChildFishNo__Fii_0x20d220");
#endif

    switch (ctx->pc) {
        case 0x20d238u: goto label_20d238;
        default: break;
    }

    ctx->pc = 0x20d220u;

    // 0x20d220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d228: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x20d22c: 0x2484feca  addiu       $a0, $a0, -0x136
    ctx->pc = 0x20d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966986));
    // 0x20d230: 0x24a5feca  addiu       $a1, $a1, -0x136
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966986));
    // 0x20d234: 0x2463f170  addiu       $v1, $v1, -0xE90
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
label_20d238:
    // 0x20d238: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x20d238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20d23c: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x20d23cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20d240: 0x1489000c  bne         $a0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x20D240u;
    {
        const bool branch_taken_0x20d240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x20d240) {
            ctx->pc = 0x20D274u;
            goto label_20d274;
        }
    }
    ctx->pc = 0x20D248u;
    // 0x20d248: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x20d24c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D24Cu;
    {
        const bool branch_taken_0x20d24c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d24c) {
            ctx->pc = 0x20D274u;
            goto label_20d274;
        }
    }
    ctx->pc = 0x20D254u;
    // 0x20d254: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x20d258: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x20d25c: 0x2442f172  addiu       $v0, $v0, -0xE8E
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963570));
    // 0x20d260: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20d264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d268: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20d268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d26c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20D26Cu;
    {
        const bool branch_taken_0x20d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D26Cu;
            // 0x20d270: 0x24420136  addiu       $v0, $v0, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d26c) {
            ctx->pc = 0x20D2BCu;
            goto label_20d2bc;
        }
    }
    ctx->pc = 0x20D274u;
label_20d274:
    // 0x20d274: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x20d278: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D278u;
    {
        const bool branch_taken_0x20d278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d278) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20D280u;
    // 0x20d280: 0x14a90009  bne         $a1, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D280u;
    {
        const bool branch_taken_0x20d280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x20d280) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20D288u;
    // 0x20d288: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x20d288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x20d28c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x20d290: 0x2442f172  addiu       $v0, $v0, -0xE8E
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963570));
    // 0x20d294: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20d298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d29c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d2a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20D2A0u;
    {
        const bool branch_taken_0x20d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2A0u;
            // 0x20d2a4: 0x24420136  addiu       $v0, $v0, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2a0) {
            ctx->pc = 0x20D2BCu;
            goto label_20d2bc;
        }
    }
    ctx->pc = 0x20D2A8u;
label_20d2a8:
    // 0x20d2a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20d2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20d2ac: 0x28c200ab  slti        $v0, $a2, 0xAB
    ctx->pc = 0x20d2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x20d2b0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x20D2B0u;
    {
        const bool branch_taken_0x20d2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2B0u;
            // 0x20d2b4: 0x24e70003  addiu       $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2b0) {
            ctx->pc = 0x20D238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d238;
        }
    }
    ctx->pc = 0x20D2B8u;
    // 0x20d2b8: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x20d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_20d2bc:
    // 0x20d2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D2C4u;
}
