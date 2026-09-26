#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_SCALE__FP12RS_STACKDATAi
// Address: 0x2e4570 - 0x2e45f8
void ps2__CHR_GET_SCALE__FP12RS_STACKDATAi_0x2e4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_SCALE__FP12RS_STACKDATAi_0x2e4570");
#endif

    switch (ctx->pc) {
        case 0x2e4570u: goto label_2e4570;
        case 0x2e4574u: goto label_2e4574;
        case 0x2e4578u: goto label_2e4578;
        case 0x2e457cu: goto label_2e457c;
        case 0x2e4580u: goto label_2e4580;
        case 0x2e4584u: goto label_2e4584;
        case 0x2e4588u: goto label_2e4588;
        case 0x2e458cu: goto label_2e458c;
        case 0x2e4590u: goto label_2e4590;
        case 0x2e4594u: goto label_2e4594;
        case 0x2e4598u: goto label_2e4598;
        case 0x2e459cu: goto label_2e459c;
        case 0x2e45a0u: goto label_2e45a0;
        case 0x2e45a4u: goto label_2e45a4;
        case 0x2e45a8u: goto label_2e45a8;
        case 0x2e45acu: goto label_2e45ac;
        case 0x2e45b0u: goto label_2e45b0;
        case 0x2e45b4u: goto label_2e45b4;
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e45bcu: goto label_2e45bc;
        case 0x2e45c0u: goto label_2e45c0;
        case 0x2e45c4u: goto label_2e45c4;
        case 0x2e45c8u: goto label_2e45c8;
        case 0x2e45ccu: goto label_2e45cc;
        case 0x2e45d0u: goto label_2e45d0;
        case 0x2e45d4u: goto label_2e45d4;
        case 0x2e45d8u: goto label_2e45d8;
        case 0x2e45dcu: goto label_2e45dc;
        case 0x2e45e0u: goto label_2e45e0;
        case 0x2e45e4u: goto label_2e45e4;
        case 0x2e45e8u: goto label_2e45e8;
        case 0x2e45ecu: goto label_2e45ec;
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e45f4u: goto label_2e45f4;
        default: break;
    }

    ctx->pc = 0x2e4570u;

label_2e4570:
    // 0x2e4570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4574:
    // 0x2e4574: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e4578:
    // 0x2e4578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e457c:
    // 0x2e457c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4580:
    // 0x2e4580: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e4584:
    if (ctx->pc == 0x2E4584u) {
        ctx->pc = 0x2E4584u;
            // 0x2e4584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4588u;
        goto label_2e4588;
    }
    ctx->pc = 0x2E4580u;
    {
        const bool branch_taken_0x2e4580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4580u;
            // 0x2e4584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4580) {
            ctx->pc = 0x2E4590u;
            goto label_2e4590;
        }
    }
    ctx->pc = 0x2E4588u;
label_2e4588:
    // 0x2e4588: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e458c:
    if (ctx->pc == 0x2E458Cu) {
        ctx->pc = 0x2E458Cu;
            // 0x2e458c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4590u;
        goto label_2e4590;
    }
    ctx->pc = 0x2E4588u;
    {
        const bool branch_taken_0x2e4588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4588u;
            // 0x2e458c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4588) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E4590u;
label_2e4590:
    // 0x2e4590: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4594:
    // 0x2e4594: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4598:
    // 0x2e4598: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e459c:
    if (ctx->pc == 0x2E459Cu) {
        ctx->pc = 0x2E459Cu;
            // 0x2e459c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E45A0u;
        goto label_2e45a0;
    }
    ctx->pc = 0x2E4598u;
    {
        const bool branch_taken_0x2e4598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4598u;
            // 0x2e459c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4598) {
            ctx->pc = 0x2E45A8u;
            goto label_2e45a8;
        }
    }
    ctx->pc = 0x2E45A0u;
label_2e45a0:
    // 0x2e45a0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e45a4:
    if (ctx->pc == 0x2E45A4u) {
        ctx->pc = 0x2E45A4u;
            // 0x2e45a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2E45A8u;
        goto label_2e45a8;
    }
    ctx->pc = 0x2E45A0u;
    {
        const bool branch_taken_0x2e45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45A0u;
            // 0x2e45a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45a0) {
            ctx->pc = 0x2E45ECu;
            goto label_2e45ec;
        }
    }
    ctx->pc = 0x2E45A8u;
label_2e45a8:
    // 0x2e45a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e45a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e45ac:
    // 0x2e45ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e45acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e45b0:
    // 0x2e45b0: 0x320f809  jalr        $t9
label_2e45b4:
    if (ctx->pc == 0x2E45B4u) {
        ctx->pc = 0x2E45B4u;
            // 0x2e45b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E45B8u;
        goto label_2e45b8;
    }
    ctx->pc = 0x2E45B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E45B8u);
        ctx->pc = 0x2E45B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45B0u;
            // 0x2e45b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E45B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E45B8u; }
            if (ctx->pc != 0x2E45B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E45B8u;
label_2e45b8:
    // 0x2e45b8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2e45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e45bc:
    // 0x2e45bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e45c0:
    // 0x2e45c0: 0xc0b8cdc  jal         func_2E3370
label_2e45c4:
    if (ctx->pc == 0x2E45C4u) {
        ctx->pc = 0x2E45C4u;
            // 0x2e45c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E45C8u;
        goto label_2e45c8;
    }
    ctx->pc = 0x2E45C0u;
    SET_GPR_U32(ctx, 31, 0x2E45C8u);
    ctx->pc = 0x2E45C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45C0u;
            // 0x2e45c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45C8u; }
        if (ctx->pc != 0x2E45C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45C8u; }
        if (ctx->pc != 0x2E45C8u) { return; }
    }
    ctx->pc = 0x2E45C8u;
label_2e45c8:
    // 0x2e45c8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2e45c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e45cc:
    // 0x2e45cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e45ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e45d0:
    // 0x2e45d0: 0xc0b8cdc  jal         func_2E3370
label_2e45d4:
    if (ctx->pc == 0x2E45D4u) {
        ctx->pc = 0x2E45D4u;
            // 0x2e45d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E45D8u;
        goto label_2e45d8;
    }
    ctx->pc = 0x2E45D0u;
    SET_GPR_U32(ctx, 31, 0x2E45D8u);
    ctx->pc = 0x2E45D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45D0u;
            // 0x2e45d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45D8u; }
        if (ctx->pc != 0x2E45D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45D8u; }
        if (ctx->pc != 0x2E45D8u) { return; }
    }
    ctx->pc = 0x2E45D8u;
label_2e45d8:
    // 0x2e45d8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2e45d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e45dc:
    // 0x2e45dc: 0xc0b8cdc  jal         func_2E3370
label_2e45e0:
    if (ctx->pc == 0x2E45E0u) {
        ctx->pc = 0x2E45E0u;
            // 0x2e45e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E45E4u;
        goto label_2e45e4;
    }
    ctx->pc = 0x2E45DCu;
    SET_GPR_U32(ctx, 31, 0x2E45E4u);
    ctx->pc = 0x2E45E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45DCu;
            // 0x2e45e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45E4u; }
        if (ctx->pc != 0x2E45E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45E4u; }
        if (ctx->pc != 0x2E45E4u) { return; }
    }
    ctx->pc = 0x2E45E4u;
label_2e45e4:
    // 0x2e45e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e45e8:
    // 0x2e45e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e45e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e45ec:
    // 0x2e45ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e45ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e45f0:
    // 0x2e45f0: 0x3e00008  jr          $ra
label_2e45f4:
    if (ctx->pc == 0x2E45F4u) {
        ctx->pc = 0x2E45F4u;
            // 0x2e45f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E45F8u;
        goto label_fallthrough_0x2e45f0;
    }
    ctx->pc = 0x2E45F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E45F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45F0u;
            // 0x2e45f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e45f0:
    ctx->pc = 0x2E45F8u;
}
