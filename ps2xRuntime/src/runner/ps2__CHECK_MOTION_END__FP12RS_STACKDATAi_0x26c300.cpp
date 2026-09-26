#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MOTION_END__FP12RS_STACKDATAi
// Address: 0x26c300 - 0x26c36c
void ps2__CHECK_MOTION_END__FP12RS_STACKDATAi_0x26c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MOTION_END__FP12RS_STACKDATAi_0x26c300");
#endif

    switch (ctx->pc) {
        case 0x26c300u: goto label_26c300;
        case 0x26c304u: goto label_26c304;
        case 0x26c308u: goto label_26c308;
        case 0x26c30cu: goto label_26c30c;
        case 0x26c310u: goto label_26c310;
        case 0x26c314u: goto label_26c314;
        case 0x26c318u: goto label_26c318;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c320u: goto label_26c320;
        case 0x26c324u: goto label_26c324;
        case 0x26c328u: goto label_26c328;
        case 0x26c32cu: goto label_26c32c;
        case 0x26c330u: goto label_26c330;
        case 0x26c334u: goto label_26c334;
        case 0x26c338u: goto label_26c338;
        case 0x26c33cu: goto label_26c33c;
        case 0x26c340u: goto label_26c340;
        case 0x26c344u: goto label_26c344;
        case 0x26c348u: goto label_26c348;
        case 0x26c34cu: goto label_26c34c;
        case 0x26c350u: goto label_26c350;
        case 0x26c354u: goto label_26c354;
        case 0x26c358u: goto label_26c358;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c360u: goto label_26c360;
        case 0x26c364u: goto label_26c364;
        case 0x26c368u: goto label_26c368;
        default: break;
    }

    ctx->pc = 0x26c300u;

label_26c300:
    // 0x26c300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26c304:
    // 0x26c304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c308:
    // 0x26c308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26c30c:
    // 0x26c30c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_26c310:
    if (ctx->pc == 0x26C310u) {
        ctx->pc = 0x26C310u;
            // 0x26c310: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26C314u;
        goto label_26c314;
    }
    ctx->pc = 0x26C30Cu;
    {
        const bool branch_taken_0x26c30c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C30Cu;
            // 0x26c310: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c30c) {
            ctx->pc = 0x26C31Cu;
            goto label_26c31c;
        }
    }
    ctx->pc = 0x26C314u;
label_26c314:
    // 0x26c314: 0x10000011  b           . + 4 + (0x11 << 2)
label_26c318:
    if (ctx->pc == 0x26C318u) {
        ctx->pc = 0x26C318u;
            // 0x26c318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C31Cu;
        goto label_26c31c;
    }
    ctx->pc = 0x26C314u;
    {
        const bool branch_taken_0x26c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C314u;
            // 0x26c318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c314) {
            ctx->pc = 0x26C35Cu;
            goto label_26c35c;
        }
    }
    ctx->pc = 0x26C31Cu;
label_26c31c:
    // 0x26c31c: 0xc097e18  jal         func_25F860
label_26c320:
    if (ctx->pc == 0x26C320u) {
        ctx->pc = 0x26C320u;
            // 0x26c320: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26C324u;
        goto label_26c324;
    }
    ctx->pc = 0x26C31Cu;
    SET_GPR_U32(ctx, 31, 0x26C324u);
    ctx->pc = 0x26C320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C31Cu;
            // 0x26c320: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C324u; }
        if (ctx->pc != 0x26C324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C324u; }
        if (ctx->pc != 0x26C324u) { return; }
    }
    ctx->pc = 0x26C324u;
label_26c324:
    // 0x26c324: 0xc09ac74  jal         func_26B1D0
label_26c328:
    if (ctx->pc == 0x26C328u) {
        ctx->pc = 0x26C328u;
            // 0x26c328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C32Cu;
        goto label_26c32c;
    }
    ctx->pc = 0x26C324u;
    SET_GPR_U32(ctx, 31, 0x26C32Cu);
    ctx->pc = 0x26C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C324u;
            // 0x26c328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C32Cu; }
        if (ctx->pc != 0x26C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C32Cu; }
        if (ctx->pc != 0x26C32Cu) { return; }
    }
    ctx->pc = 0x26C32Cu;
label_26c32c:
    // 0x26c32c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26c330:
    if (ctx->pc == 0x26C330u) {
        ctx->pc = 0x26C334u;
        goto label_26c334;
    }
    ctx->pc = 0x26C32Cu;
    {
        const bool branch_taken_0x26c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c32c) {
            ctx->pc = 0x26C33Cu;
            goto label_26c33c;
        }
    }
    ctx->pc = 0x26C334u;
label_26c334:
    // 0x26c334: 0x10000009  b           . + 4 + (0x9 << 2)
label_26c338:
    if (ctx->pc == 0x26C338u) {
        ctx->pc = 0x26C338u;
            // 0x26c338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C33Cu;
        goto label_26c33c;
    }
    ctx->pc = 0x26C334u;
    {
        const bool branch_taken_0x26c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C334u;
            // 0x26c338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c334) {
            ctx->pc = 0x26C35Cu;
            goto label_26c35c;
        }
    }
    ctx->pc = 0x26C33Cu;
label_26c33c:
    // 0x26c33c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c340:
    // 0x26c340: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x26c340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_26c344:
    // 0x26c344: 0x320f809  jalr        $t9
label_26c348:
    if (ctx->pc == 0x26C348u) {
        ctx->pc = 0x26C348u;
            // 0x26c348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C34Cu;
        goto label_26c34c;
    }
    ctx->pc = 0x26C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26C34Cu);
        ctx->pc = 0x26C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C344u;
            // 0x26c348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26C34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26C34Cu; }
            if (ctx->pc != 0x26C34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26C34Cu;
label_26c34c:
    // 0x26c34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c350:
    // 0x26c350: 0xc097e4c  jal         func_25F930
label_26c354:
    if (ctx->pc == 0x26C354u) {
        ctx->pc = 0x26C354u;
            // 0x26c354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26C358u;
        goto label_26c358;
    }
    ctx->pc = 0x26C350u;
    SET_GPR_U32(ctx, 31, 0x26C358u);
    ctx->pc = 0x26C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C350u;
            // 0x26c354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C358u; }
        if (ctx->pc != 0x26C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C358u; }
        if (ctx->pc != 0x26C358u) { return; }
    }
    ctx->pc = 0x26C358u;
label_26c358:
    // 0x26c358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c35c:
    // 0x26c35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c360:
    // 0x26c360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26c364:
    // 0x26c364: 0x3e00008  jr          $ra
label_26c368:
    if (ctx->pc == 0x26C368u) {
        ctx->pc = 0x26C368u;
            // 0x26c368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26C36Cu;
        goto label_fallthrough_0x26c364;
    }
    ctx->pc = 0x26C364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C364u;
            // 0x26c368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26c364:
    ctx->pc = 0x26C36Cu;
}
