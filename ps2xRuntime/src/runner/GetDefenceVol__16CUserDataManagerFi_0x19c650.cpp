#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefenceVol__16CUserDataManagerFi
// Address: 0x19c650 - 0x19c6d4
void GetDefenceVol__16CUserDataManagerFi_0x19c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefenceVol__16CUserDataManagerFi_0x19c650");
#endif

    switch (ctx->pc) {
        case 0x19c6a0u: goto label_19c6a0;
        default: break;
    }

    ctx->pc = 0x19c650u;

    // 0x19c650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c654: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C654u;
    {
        const bool branch_taken_0x19c654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C654u;
            // 0x19c658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c654) {
            ctx->pc = 0x19C668u;
            goto label_19c668;
        }
    }
    ctx->pc = 0x19C65Cu;
    // 0x19c65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c660: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19C660u;
    {
        const bool branch_taken_0x19c660 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C660u;
            // 0x19c664: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c660) {
            ctx->pc = 0x19C690u;
            goto label_19c690;
        }
    }
    ctx->pc = 0x19C668u;
label_19c668:
    // 0x19c668: 0x2402038c  addiu       $v0, $zero, 0x38C
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
    // 0x19c66c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19c66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19c670: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19c674: 0x24423f48  addiu       $v0, $v0, 0x3F48
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
    // 0x19c678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C678u;
    {
        const bool branch_taken_0x19c678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c678) {
            ctx->pc = 0x19C688u;
            goto label_19c688;
        }
    }
    ctx->pc = 0x19C680u;
    // 0x19c680: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19C680u;
    {
        const bool branch_taken_0x19c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C680u;
            // 0x19c684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c680) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C688u;
label_19c688:
    // 0x19c688: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19C688u;
    {
        const bool branch_taken_0x19c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C688u;
            // 0x19c68c: 0x9442000a  lhu         $v0, 0xA($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c688) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C690u;
label_19c690:
    // 0x19c690: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C690u;
    {
        const bool branch_taken_0x19c690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C690u;
            // 0x19c694: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c690) {
            ctx->pc = 0x19C6A8u;
            goto label_19c6a8;
        }
    }
    ctx->pc = 0x19C698u;
    // 0x19c698: 0xc066a18  jal         func_19A860
    ctx->pc = 0x19C698u;
    SET_GPR_U32(ctx, 31, 0x19C6A0u);
    ctx->pc = 0x19C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C698u;
            // 0x19c69c: 0x24844660  addiu       $a0, $a0, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A860u;
    if (runtime->hasFunction(0x19A860u)) {
        auto targetFn = runtime->lookupFunction(0x19A860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6A0u; }
        if (ctx->pc != 0x19C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__9ROBO_DATAFv_0x19a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6A0u; }
        if (ctx->pc != 0x19C6A0u) { return; }
    }
    ctx->pc = 0x19C6A0u;
label_19c6a0:
    // 0x19c6a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19C6A0u;
    {
        const bool branch_taken_0x19c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6A0u;
            // 0x19c6a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6a0) {
            ctx->pc = 0x19C6CCu;
            goto label_19c6cc;
        }
    }
    ctx->pc = 0x19C6A8u;
label_19c6a8:
    // 0x19c6a8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C6A8u;
    {
        const bool branch_taken_0x19c6a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6A8u;
            // 0x19c6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6a8) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C6B0u;
    // 0x19c6b0: 0x248242d4  addiu       $v0, $a0, 0x42D4
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17108));
    // 0x19c6b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C6B4u;
    {
        const bool branch_taken_0x19c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c6b4) {
            ctx->pc = 0x19C6C4u;
            goto label_19c6c4;
        }
    }
    ctx->pc = 0x19C6BCu;
    // 0x19c6bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C6BCu;
    {
        const bool branch_taken_0x19c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6BCu;
            // 0x19c6c0: 0x9442000a  lhu         $v0, 0xA($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6bc) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C6C4u;
label_19c6c4:
    // 0x19c6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c6c8:
    // 0x19c6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c6cc:
    // 0x19c6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6CCu;
            // 0x19c6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C6D4u;
}
