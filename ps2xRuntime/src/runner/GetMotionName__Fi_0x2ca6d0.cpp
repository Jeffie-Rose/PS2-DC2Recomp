#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMotionName__Fi
// Address: 0x2ca6d0 - 0x2ca768
void GetMotionName__Fi_0x2ca6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMotionName__Fi_0x2ca6d0");
#endif

    ctx->pc = 0x2ca6d0u;

    // 0x2ca6d0: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x2ca6d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ca6d4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CA6D4u;
    {
        const bool branch_taken_0x2ca6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6D4u;
            // 0x2ca6d8: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6d4) {
            ctx->pc = 0x2CA758u;
            goto label_2ca758;
        }
    }
    ctx->pc = 0x2CA6DCu;
    // 0x2ca6dc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2ca6e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ca6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ca6e4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2ca6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2ca6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca6f0: 0x400008  jr          $v0
    ctx->pc = 0x2CA6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA6F8u: goto label_2ca6f8;
            case 0x2CA704u: goto label_2ca704;
            case 0x2CA710u: goto label_2ca710;
            case 0x2CA71Cu: goto label_2ca71c;
            case 0x2CA728u: goto label_2ca728;
            case 0x2CA734u: goto label_2ca734;
            case 0x2CA740u: goto label_2ca740;
            case 0x2CA74Cu: goto label_2ca74c;
            case 0x2CA758u: goto label_2ca758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CA6F8u;
label_2ca6f8:
    // 0x2ca6f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca6fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CA6FCu;
    {
        const bool branch_taken_0x2ca6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA6FCu;
            // 0x2ca700: 0x8c225364  lw          $v0, 0x5364($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6fc) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA704u;
label_2ca704:
    // 0x2ca704: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca708: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA708u;
    {
        const bool branch_taken_0x2ca708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA708u;
            // 0x2ca70c: 0x8c225368  lw          $v0, 0x5368($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca708) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA710u;
label_2ca710:
    // 0x2ca710: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca714: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA714u;
    {
        const bool branch_taken_0x2ca714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA714u;
            // 0x2ca718: 0x8c22536c  lw          $v0, 0x536C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca714) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA71Cu;
label_2ca71c:
    // 0x2ca71c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca720: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CA720u;
    {
        const bool branch_taken_0x2ca720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA720u;
            // 0x2ca724: 0x8c225370  lw          $v0, 0x5370($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca720) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA728u;
label_2ca728:
    // 0x2ca728: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca72c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CA72Cu;
    {
        const bool branch_taken_0x2ca72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA72Cu;
            // 0x2ca730: 0x8c225374  lw          $v0, 0x5374($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca72c) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA734u;
label_2ca734:
    // 0x2ca734: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA738u;
    {
        const bool branch_taken_0x2ca738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA738u;
            // 0x2ca73c: 0x8c225378  lw          $v0, 0x5378($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca738) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA740u;
label_2ca740:
    // 0x2ca740: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA744u;
    {
        const bool branch_taken_0x2ca744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA744u;
            // 0x2ca748: 0x8c22537c  lw          $v0, 0x537C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca744) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA74Cu;
label_2ca74c:
    // 0x2ca74c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2ca74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2ca750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA750u;
    {
        const bool branch_taken_0x2ca750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA750u;
            // 0x2ca754: 0x8c225380  lw          $v0, 0x5380($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca750) {
            ctx->pc = 0x2CA760u;
            goto label_2ca760;
        }
    }
    ctx->pc = 0x2CA758u;
label_2ca758:
    // 0x2ca758: 0x8c225360  lw          $v0, 0x5360($at)
    ctx->pc = 0x2ca758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21344)));
    // 0x2ca75c: 0x0  nop
    ctx->pc = 0x2ca75cu;
    // NOP
label_2ca760:
    // 0x2ca760: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA768u;
}
