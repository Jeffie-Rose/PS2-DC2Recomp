#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step2__11CPlaceAnimeFv
// Address: 0x2fc2c0 - 0x2fc358
void Step2__11CPlaceAnimeFv_0x2fc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step2__11CPlaceAnimeFv_0x2fc2c0");
#endif

    switch (ctx->pc) {
        case 0x2fc2c0u: goto label_2fc2c0;
        case 0x2fc2c4u: goto label_2fc2c4;
        case 0x2fc2c8u: goto label_2fc2c8;
        case 0x2fc2ccu: goto label_2fc2cc;
        case 0x2fc2d0u: goto label_2fc2d0;
        case 0x2fc2d4u: goto label_2fc2d4;
        case 0x2fc2d8u: goto label_2fc2d8;
        case 0x2fc2dcu: goto label_2fc2dc;
        case 0x2fc2e0u: goto label_2fc2e0;
        case 0x2fc2e4u: goto label_2fc2e4;
        case 0x2fc2e8u: goto label_2fc2e8;
        case 0x2fc2ecu: goto label_2fc2ec;
        case 0x2fc2f0u: goto label_2fc2f0;
        case 0x2fc2f4u: goto label_2fc2f4;
        case 0x2fc2f8u: goto label_2fc2f8;
        case 0x2fc2fcu: goto label_2fc2fc;
        case 0x2fc300u: goto label_2fc300;
        case 0x2fc304u: goto label_2fc304;
        case 0x2fc308u: goto label_2fc308;
        case 0x2fc30cu: goto label_2fc30c;
        case 0x2fc310u: goto label_2fc310;
        case 0x2fc314u: goto label_2fc314;
        case 0x2fc318u: goto label_2fc318;
        case 0x2fc31cu: goto label_2fc31c;
        case 0x2fc320u: goto label_2fc320;
        case 0x2fc324u: goto label_2fc324;
        case 0x2fc328u: goto label_2fc328;
        case 0x2fc32cu: goto label_2fc32c;
        case 0x2fc330u: goto label_2fc330;
        case 0x2fc334u: goto label_2fc334;
        case 0x2fc338u: goto label_2fc338;
        case 0x2fc33cu: goto label_2fc33c;
        case 0x2fc340u: goto label_2fc340;
        case 0x2fc344u: goto label_2fc344;
        case 0x2fc348u: goto label_2fc348;
        case 0x2fc34cu: goto label_2fc34c;
        case 0x2fc350u: goto label_2fc350;
        case 0x2fc354u: goto label_2fc354;
        default: break;
    }

    ctx->pc = 0x2fc2c0u;

label_2fc2c0:
    // 0x2fc2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fc2c4:
    // 0x2fc2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fc2c8:
    // 0x2fc2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc2cc:
    // 0x2fc2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc2d0:
    // 0x2fc2d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2fc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc2d4:
    // 0x2fc2d4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2fc2d8:
    if (ctx->pc == 0x2FC2D8u) {
        ctx->pc = 0x2FC2DCu;
        goto label_2fc2dc;
    }
    ctx->pc = 0x2FC2D4u;
    {
        const bool branch_taken_0x2fc2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2d4) {
            ctx->pc = 0x2FC348u;
            goto label_2fc348;
        }
    }
    ctx->pc = 0x2FC2DCu;
label_2fc2dc:
    // 0x2fc2dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fc2e0:
    // 0x2fc2e0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2fc2e4:
    if (ctx->pc == 0x2FC2E4u) {
        ctx->pc = 0x2FC2E8u;
        goto label_2fc2e8;
    }
    ctx->pc = 0x2FC2E0u;
    {
        const bool branch_taken_0x2fc2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc2e0) {
            ctx->pc = 0x2FC2F0u;
            goto label_2fc2f0;
        }
    }
    ctx->pc = 0x2FC2E8u;
label_2fc2e8:
    // 0x2fc2e8: 0x10000018  b           . + 4 + (0x18 << 2)
label_2fc2ec:
    if (ctx->pc == 0x2FC2ECu) {
        ctx->pc = 0x2FC2ECu;
            // 0x2fc2ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2FC2F0u;
        goto label_2fc2f0;
    }
    ctx->pc = 0x2FC2E8u;
    {
        const bool branch_taken_0x2fc2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC2E8u;
            // 0x2fc2ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc2e8) {
            ctx->pc = 0x2FC34Cu;
            goto label_2fc34c;
        }
    }
    ctx->pc = 0x2FC2F0u;
label_2fc2f0:
    // 0x2fc2f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fc2f4:
    // 0x2fc2f4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_2fc2f8:
    if (ctx->pc == 0x2FC2F8u) {
        ctx->pc = 0x2FC2FCu;
        goto label_2fc2fc;
    }
    ctx->pc = 0x2FC2F4u;
    {
        const bool branch_taken_0x2fc2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2f4) {
            ctx->pc = 0x2FC348u;
            goto label_2fc348;
        }
    }
    ctx->pc = 0x2FC2FCu;
label_2fc2fc:
    // 0x2fc2fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2fc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fc300:
    // 0x2fc300: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2fc304:
    if (ctx->pc == 0x2FC304u) {
        ctx->pc = 0x2FC308u;
        goto label_2fc308;
    }
    ctx->pc = 0x2FC300u;
    {
        const bool branch_taken_0x2fc300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc300) {
            ctx->pc = 0x2FC310u;
            goto label_2fc310;
        }
    }
    ctx->pc = 0x2FC308u;
label_2fc308:
    // 0x2fc308: 0x1000000f  b           . + 4 + (0xF << 2)
label_2fc30c:
    if (ctx->pc == 0x2FC30Cu) {
        ctx->pc = 0x2FC310u;
        goto label_2fc310;
    }
    ctx->pc = 0x2FC308u;
    {
        const bool branch_taken_0x2fc308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc308) {
            ctx->pc = 0x2FC348u;
            goto label_2fc348;
        }
    }
    ctx->pc = 0x2FC310u;
label_2fc310:
    // 0x2fc310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc314:
    // 0x2fc314: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fc314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fc318:
    // 0x2fc318: 0x320f809  jalr        $t9
label_2fc31c:
    if (ctx->pc == 0x2FC31Cu) {
        ctx->pc = 0x2FC31Cu;
            // 0x2fc31c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x2FC320u;
        goto label_2fc320;
    }
    ctx->pc = 0x2FC318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC320u);
        ctx->pc = 0x2FC31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC318u;
            // 0x2fc31c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC320u; }
            if (ctx->pc != 0x2FC320u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC320u;
label_2fc320:
    // 0x2fc320: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fc320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fc324:
    // 0x2fc324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc328:
    // 0x2fc328: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2fc328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2fc32c:
    // 0x2fc32c: 0x320f809  jalr        $t9
label_2fc330:
    if (ctx->pc == 0x2FC330u) {
        ctx->pc = 0x2FC330u;
            // 0x2fc330: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x2FC334u;
        goto label_2fc334;
    }
    ctx->pc = 0x2FC32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC334u);
        ctx->pc = 0x2FC330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC32Cu;
            // 0x2fc330: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC334u; }
            if (ctx->pc != 0x2FC334u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC334u;
label_2fc334:
    // 0x2fc334: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fc334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fc338:
    // 0x2fc338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc33c:
    // 0x2fc33c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fc33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fc340:
    // 0x2fc340: 0x320f809  jalr        $t9
label_2fc344:
    if (ctx->pc == 0x2FC344u) {
        ctx->pc = 0x2FC344u;
            // 0x2fc344: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2FC348u;
        goto label_2fc348;
    }
    ctx->pc = 0x2FC340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC348u);
        ctx->pc = 0x2FC344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC340u;
            // 0x2fc344: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC348u; }
            if (ctx->pc != 0x2FC348u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC348u;
label_2fc348:
    // 0x2fc348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc34c:
    // 0x2fc34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc350:
    // 0x2fc350: 0x3e00008  jr          $ra
label_2fc354:
    if (ctx->pc == 0x2FC354u) {
        ctx->pc = 0x2FC354u;
            // 0x2fc354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FC358u;
        goto label_fallthrough_0x2fc350;
    }
    ctx->pc = 0x2FC350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC350u;
            // 0x2fc354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc350:
    ctx->pc = 0x2FC358u;
}
