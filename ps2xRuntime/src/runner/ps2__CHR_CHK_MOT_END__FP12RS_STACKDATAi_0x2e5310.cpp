#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_CHK_MOT_END__FP12RS_STACKDATAi
// Address: 0x2e5310 - 0x2e5378
void ps2__CHR_CHK_MOT_END__FP12RS_STACKDATAi_0x2e5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_CHK_MOT_END__FP12RS_STACKDATAi_0x2e5310");
#endif

    switch (ctx->pc) {
        case 0x2e5310u: goto label_2e5310;
        case 0x2e5314u: goto label_2e5314;
        case 0x2e5318u: goto label_2e5318;
        case 0x2e531cu: goto label_2e531c;
        case 0x2e5320u: goto label_2e5320;
        case 0x2e5324u: goto label_2e5324;
        case 0x2e5328u: goto label_2e5328;
        case 0x2e532cu: goto label_2e532c;
        case 0x2e5330u: goto label_2e5330;
        case 0x2e5334u: goto label_2e5334;
        case 0x2e5338u: goto label_2e5338;
        case 0x2e533cu: goto label_2e533c;
        case 0x2e5340u: goto label_2e5340;
        case 0x2e5344u: goto label_2e5344;
        case 0x2e5348u: goto label_2e5348;
        case 0x2e534cu: goto label_2e534c;
        case 0x2e5350u: goto label_2e5350;
        case 0x2e5354u: goto label_2e5354;
        case 0x2e5358u: goto label_2e5358;
        case 0x2e535cu: goto label_2e535c;
        case 0x2e5360u: goto label_2e5360;
        case 0x2e5364u: goto label_2e5364;
        case 0x2e5368u: goto label_2e5368;
        case 0x2e536cu: goto label_2e536c;
        case 0x2e5370u: goto label_2e5370;
        case 0x2e5374u: goto label_2e5374;
        default: break;
    }

    ctx->pc = 0x2e5310u;

label_2e5310:
    // 0x2e5310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e5314:
    // 0x2e5314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5318:
    // 0x2e5318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e531c:
    // 0x2e531c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e5320:
    // 0x2e5320: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e5324:
    if (ctx->pc == 0x2E5324u) {
        ctx->pc = 0x2E5324u;
            // 0x2e5324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5328u;
        goto label_2e5328;
    }
    ctx->pc = 0x2E5320u;
    {
        const bool branch_taken_0x2e5320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5320u;
            // 0x2e5324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5320) {
            ctx->pc = 0x2E5330u;
            goto label_2e5330;
        }
    }
    ctx->pc = 0x2E5328u;
label_2e5328:
    // 0x2e5328: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e532c:
    if (ctx->pc == 0x2E532Cu) {
        ctx->pc = 0x2E532Cu;
            // 0x2e532c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5330u;
        goto label_2e5330;
    }
    ctx->pc = 0x2E5328u;
    {
        const bool branch_taken_0x2e5328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5328u;
            // 0x2e532c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5328) {
            ctx->pc = 0x2E5368u;
            goto label_2e5368;
        }
    }
    ctx->pc = 0x2E5330u;
label_2e5330:
    // 0x2e5330: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e5334:
    // 0x2e5334: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e5334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e5338:
    // 0x2e5338: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e533c:
    if (ctx->pc == 0x2E533Cu) {
        ctx->pc = 0x2E533Cu;
            // 0x2e533c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5340u;
        goto label_2e5340;
    }
    ctx->pc = 0x2E5338u;
    {
        const bool branch_taken_0x2e5338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5338u;
            // 0x2e533c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5338) {
            ctx->pc = 0x2E5348u;
            goto label_2e5348;
        }
    }
    ctx->pc = 0x2E5340u;
label_2e5340:
    // 0x2e5340: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e5344:
    if (ctx->pc == 0x2E5344u) {
        ctx->pc = 0x2E5344u;
            // 0x2e5344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2E5348u;
        goto label_2e5348;
    }
    ctx->pc = 0x2E5340u;
    {
        const bool branch_taken_0x2e5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5340u;
            // 0x2e5344: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5340) {
            ctx->pc = 0x2E536Cu;
            goto label_2e536c;
        }
    }
    ctx->pc = 0x2E5348u;
label_2e5348:
    // 0x2e5348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e5348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e534c:
    // 0x2e534c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x2e534cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_2e5350:
    // 0x2e5350: 0x320f809  jalr        $t9
label_2e5354:
    if (ctx->pc == 0x2E5354u) {
        ctx->pc = 0x2E5358u;
        goto label_2e5358;
    }
    ctx->pc = 0x2E5350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5358u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5358u; }
            if (ctx->pc != 0x2E5358u) { return; }
        }
        }
    }
    ctx->pc = 0x2E5358u;
label_2e5358:
    // 0x2e5358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e535c:
    // 0x2e535c: 0xc0b8cd4  jal         func_2E3350
label_2e5360:
    if (ctx->pc == 0x2E5360u) {
        ctx->pc = 0x2E5360u;
            // 0x2e5360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5364u;
        goto label_2e5364;
    }
    ctx->pc = 0x2E535Cu;
    SET_GPR_U32(ctx, 31, 0x2E5364u);
    ctx->pc = 0x2E5360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E535Cu;
            // 0x2e5360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5364u; }
        if (ctx->pc != 0x2E5364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5364u; }
        if (ctx->pc != 0x2E5364u) { return; }
    }
    ctx->pc = 0x2E5364u;
label_2e5364:
    // 0x2e5364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5368:
    // 0x2e5368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e536c:
    // 0x2e536c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5370:
    // 0x2e5370: 0x3e00008  jr          $ra
label_2e5374:
    if (ctx->pc == 0x2E5374u) {
        ctx->pc = 0x2E5374u;
            // 0x2e5374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E5378u;
        goto label_fallthrough_0x2e5370;
    }
    ctx->pc = 0x2E5370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5370u;
            // 0x2e5374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e5370:
    ctx->pc = 0x2E5378u;
}
