#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_POS__FP12RS_STACKDATAi
// Address: 0x2e42d0 - 0x2e4358
void ps2__CHR_GET_POS__FP12RS_STACKDATAi_0x2e42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_POS__FP12RS_STACKDATAi_0x2e42d0");
#endif

    switch (ctx->pc) {
        case 0x2e42d0u: goto label_2e42d0;
        case 0x2e42d4u: goto label_2e42d4;
        case 0x2e42d8u: goto label_2e42d8;
        case 0x2e42dcu: goto label_2e42dc;
        case 0x2e42e0u: goto label_2e42e0;
        case 0x2e42e4u: goto label_2e42e4;
        case 0x2e42e8u: goto label_2e42e8;
        case 0x2e42ecu: goto label_2e42ec;
        case 0x2e42f0u: goto label_2e42f0;
        case 0x2e42f4u: goto label_2e42f4;
        case 0x2e42f8u: goto label_2e42f8;
        case 0x2e42fcu: goto label_2e42fc;
        case 0x2e4300u: goto label_2e4300;
        case 0x2e4304u: goto label_2e4304;
        case 0x2e4308u: goto label_2e4308;
        case 0x2e430cu: goto label_2e430c;
        case 0x2e4310u: goto label_2e4310;
        case 0x2e4314u: goto label_2e4314;
        case 0x2e4318u: goto label_2e4318;
        case 0x2e431cu: goto label_2e431c;
        case 0x2e4320u: goto label_2e4320;
        case 0x2e4324u: goto label_2e4324;
        case 0x2e4328u: goto label_2e4328;
        case 0x2e432cu: goto label_2e432c;
        case 0x2e4330u: goto label_2e4330;
        case 0x2e4334u: goto label_2e4334;
        case 0x2e4338u: goto label_2e4338;
        case 0x2e433cu: goto label_2e433c;
        case 0x2e4340u: goto label_2e4340;
        case 0x2e4344u: goto label_2e4344;
        case 0x2e4348u: goto label_2e4348;
        case 0x2e434cu: goto label_2e434c;
        case 0x2e4350u: goto label_2e4350;
        case 0x2e4354u: goto label_2e4354;
        default: break;
    }

    ctx->pc = 0x2e42d0u;

label_2e42d0:
    // 0x2e42d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e42d4:
    // 0x2e42d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e42d8:
    // 0x2e42d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e42d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e42dc:
    // 0x2e42dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e42e0:
    // 0x2e42e0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e42e4:
    if (ctx->pc == 0x2E42E4u) {
        ctx->pc = 0x2E42E4u;
            // 0x2e42e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E42E8u;
        goto label_2e42e8;
    }
    ctx->pc = 0x2E42E0u;
    {
        const bool branch_taken_0x2e42e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42E0u;
            // 0x2e42e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42e0) {
            ctx->pc = 0x2E42F0u;
            goto label_2e42f0;
        }
    }
    ctx->pc = 0x2E42E8u;
label_2e42e8:
    // 0x2e42e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e42ec:
    if (ctx->pc == 0x2E42ECu) {
        ctx->pc = 0x2E42ECu;
            // 0x2e42ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E42F0u;
        goto label_2e42f0;
    }
    ctx->pc = 0x2E42E8u;
    {
        const bool branch_taken_0x2e42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42E8u;
            // 0x2e42ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42e8) {
            ctx->pc = 0x2E4348u;
            goto label_2e4348;
        }
    }
    ctx->pc = 0x2E42F0u;
label_2e42f0:
    // 0x2e42f0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e42f4:
    // 0x2e42f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e42f8:
    // 0x2e42f8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e42fc:
    if (ctx->pc == 0x2E42FCu) {
        ctx->pc = 0x2E42FCu;
            // 0x2e42fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4300u;
        goto label_2e4300;
    }
    ctx->pc = 0x2E42F8u;
    {
        const bool branch_taken_0x2e42f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E42FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42F8u;
            // 0x2e42fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42f8) {
            ctx->pc = 0x2E4308u;
            goto label_2e4308;
        }
    }
    ctx->pc = 0x2E4300u;
label_2e4300:
    // 0x2e4300: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e4304:
    if (ctx->pc == 0x2E4304u) {
        ctx->pc = 0x2E4304u;
            // 0x2e4304: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2E4308u;
        goto label_2e4308;
    }
    ctx->pc = 0x2E4300u;
    {
        const bool branch_taken_0x2e4300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4300u;
            // 0x2e4304: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4300) {
            ctx->pc = 0x2E434Cu;
            goto label_2e434c;
        }
    }
    ctx->pc = 0x2E4308u;
label_2e4308:
    // 0x2e4308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e430c:
    // 0x2e430c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e430cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e4310:
    // 0x2e4310: 0x320f809  jalr        $t9
label_2e4314:
    if (ctx->pc == 0x2E4314u) {
        ctx->pc = 0x2E4314u;
            // 0x2e4314: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4318u;
        goto label_2e4318;
    }
    ctx->pc = 0x2E4310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4318u);
        ctx->pc = 0x2E4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4310u;
            // 0x2e4314: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4318u; }
            if (ctx->pc != 0x2E4318u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4318u;
label_2e4318:
    // 0x2e4318: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e431c:
    // 0x2e431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4320:
    // 0x2e4320: 0xc0b8cdc  jal         func_2E3370
label_2e4324:
    if (ctx->pc == 0x2E4324u) {
        ctx->pc = 0x2E4324u;
            // 0x2e4324: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4328u;
        goto label_2e4328;
    }
    ctx->pc = 0x2E4320u;
    SET_GPR_U32(ctx, 31, 0x2E4328u);
    ctx->pc = 0x2E4324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4320u;
            // 0x2e4324: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4328u; }
        if (ctx->pc != 0x2E4328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4328u; }
        if (ctx->pc != 0x2E4328u) { return; }
    }
    ctx->pc = 0x2E4328u;
label_2e4328:
    // 0x2e4328: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e4328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e432c:
    // 0x2e432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4330:
    // 0x2e4330: 0xc0b8cdc  jal         func_2E3370
label_2e4334:
    if (ctx->pc == 0x2E4334u) {
        ctx->pc = 0x2E4334u;
            // 0x2e4334: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4338u;
        goto label_2e4338;
    }
    ctx->pc = 0x2E4330u;
    SET_GPR_U32(ctx, 31, 0x2E4338u);
    ctx->pc = 0x2E4334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4330u;
            // 0x2e4334: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4338u; }
        if (ctx->pc != 0x2E4338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4338u; }
        if (ctx->pc != 0x2E4338u) { return; }
    }
    ctx->pc = 0x2E4338u;
label_2e4338:
    // 0x2e4338: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e433c:
    // 0x2e433c: 0xc0b8cdc  jal         func_2E3370
label_2e4340:
    if (ctx->pc == 0x2E4340u) {
        ctx->pc = 0x2E4340u;
            // 0x2e4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4344u;
        goto label_2e4344;
    }
    ctx->pc = 0x2E433Cu;
    SET_GPR_U32(ctx, 31, 0x2E4344u);
    ctx->pc = 0x2E4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E433Cu;
            // 0x2e4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4344u; }
        if (ctx->pc != 0x2E4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4344u; }
        if (ctx->pc != 0x2E4344u) { return; }
    }
    ctx->pc = 0x2E4344u;
label_2e4344:
    // 0x2e4344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4348:
    // 0x2e4348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e434c:
    // 0x2e434c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e434cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4350:
    // 0x2e4350: 0x3e00008  jr          $ra
label_2e4354:
    if (ctx->pc == 0x2E4354u) {
        ctx->pc = 0x2E4354u;
            // 0x2e4354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4358u;
        goto label_fallthrough_0x2e4350;
    }
    ctx->pc = 0x2E4350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4350u;
            // 0x2e4354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4350:
    ctx->pc = 0x2E4358u;
}
