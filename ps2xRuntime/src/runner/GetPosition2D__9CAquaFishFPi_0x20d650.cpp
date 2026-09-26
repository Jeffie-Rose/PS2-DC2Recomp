#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosition2D__9CAquaFishFPi
// Address: 0x20d650 - 0x20d6f0
void GetPosition2D__9CAquaFishFPi_0x20d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosition2D__9CAquaFishFPi_0x20d650");
#endif

    switch (ctx->pc) {
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6a8u: goto label_20d6a8;
        case 0x20d6acu: goto label_20d6ac;
        case 0x20d6b0u: goto label_20d6b0;
        case 0x20d6b4u: goto label_20d6b4;
        case 0x20d6b8u: goto label_20d6b8;
        case 0x20d6bcu: goto label_20d6bc;
        case 0x20d6c0u: goto label_20d6c0;
        case 0x20d6c4u: goto label_20d6c4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6ccu: goto label_20d6cc;
        case 0x20d6d0u: goto label_20d6d0;
        case 0x20d6d4u: goto label_20d6d4;
        case 0x20d6d8u: goto label_20d6d8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d6ecu: goto label_20d6ec;
        default: break;
    }

    ctx->pc = 0x20d650u;

label_20d650:
    // 0x20d650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20d654:
    // 0x20d654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20d658:
    // 0x20d658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d65c:
    // 0x20d65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d660:
    // 0x20d660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d664:
    // 0x20d664: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_20d668:
    // 0x20d668: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_20d66c:
    if (ctx->pc == 0x20D66Cu) {
        ctx->pc = 0x20D66Cu;
            // 0x20d66c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D670u;
        goto label_20d670;
    }
    ctx->pc = 0x20D668u;
    {
        const bool branch_taken_0x20d668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D668u;
            // 0x20d66c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d668) {
            ctx->pc = 0x20D6DCu;
            goto label_20d6dc;
        }
    }
    ctx->pc = 0x20D670u;
label_20d670:
    // 0x20d670: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x20d670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_20d674:
    // 0x20d674: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20d674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20d678:
    // 0x20d678: 0x320f809  jalr        $t9
label_20d67c:
    if (ctx->pc == 0x20D67Cu) {
        ctx->pc = 0x20D67Cu;
            // 0x20d67c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20D680u;
        goto label_20d680;
    }
    ctx->pc = 0x20D678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D680u);
        ctx->pc = 0x20D67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D678u;
            // 0x20d67c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D680u; }
            if (ctx->pc != 0x20D680u) { return; }
        }
        }
    }
    ctx->pc = 0x20D680u;
label_20d680:
    // 0x20d680: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x20d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_20d684:
    // 0x20d684: 0xc04c574  jal         func_1315D0
label_20d688:
    if (ctx->pc == 0x20D688u) {
        ctx->pc = 0x20D688u;
            // 0x20d688: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20D68Cu;
        goto label_20d68c;
    }
    ctx->pc = 0x20D684u;
    SET_GPR_U32(ctx, 31, 0x20D68Cu);
    ctx->pc = 0x20D688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D684u;
            // 0x20d688: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D68Cu; }
        if (ctx->pc != 0x20D68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D68Cu; }
        if (ctx->pc != 0x20D68Cu) { return; }
    }
    ctx->pc = 0x20D68Cu;
label_20d68c:
    // 0x20d68c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d690:
    // 0x20d690: 0xc050e28  jal         func_1438A0
label_20d694:
    if (ctx->pc == 0x20D694u) {
        ctx->pc = 0x20D694u;
            // 0x20d694: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20D698u;
        goto label_20d698;
    }
    ctx->pc = 0x20D690u;
    SET_GPR_U32(ctx, 31, 0x20D698u);
    ctx->pc = 0x20D694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D690u;
            // 0x20d694: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D698u; }
        if (ctx->pc != 0x20D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D698u; }
        if (ctx->pc != 0x20D698u) { return; }
    }
    ctx->pc = 0x20D698u;
label_20d698:
    // 0x20d698: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20d698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20d69c:
    // 0x20d69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d6a0:
    // 0x20d6a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20d6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20d6a4:
    // 0x20d6a4: 0x320f809  jalr        $t9
label_20d6a8:
    if (ctx->pc == 0x20D6A8u) {
        ctx->pc = 0x20D6A8u;
            // 0x20d6a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20D6ACu;
        goto label_20d6ac;
    }
    ctx->pc = 0x20D6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D6ACu);
        ctx->pc = 0x20D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6A4u;
            // 0x20d6a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D6ACu; }
            if (ctx->pc != 0x20D6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x20D6ACu;
label_20d6ac:
    // 0x20d6ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x20d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_20d6b0:
    // 0x20d6b0: 0xc05166c  jal         func_1459B0
label_20d6b4:
    if (ctx->pc == 0x20D6B4u) {
        ctx->pc = 0x20D6B4u;
            // 0x20d6b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20D6B8u;
        goto label_20d6b8;
    }
    ctx->pc = 0x20D6B0u;
    SET_GPR_U32(ctx, 31, 0x20D6B8u);
    ctx->pc = 0x20D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6B0u;
            // 0x20d6b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6B8u; }
        if (ctx->pc != 0x20D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6B8u; }
        if (ctx->pc != 0x20D6B8u) { return; }
    }
    ctx->pc = 0x20D6B8u;
label_20d6b8:
    // 0x20d6b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x20d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20d6bc:
    // 0x20d6bc: 0xc041c72  jal         func_1071C8
label_20d6c0:
    if (ctx->pc == 0x20D6C0u) {
        ctx->pc = 0x20D6C0u;
            // 0x20d6c0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20D6C4u;
        goto label_20d6c4;
    }
    ctx->pc = 0x20D6BCu;
    SET_GPR_U32(ctx, 31, 0x20D6C4u);
    ctx->pc = 0x20D6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6BCu;
            // 0x20d6c0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071C8u;
    if (runtime->hasFunction(0x1071C8u)) {
        auto targetFn = runtime->lookupFunction(0x1071C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6C4u; }
        if (ctx->pc != 0x20D6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ITOF4Vector_0x1071c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6C4u; }
        if (ctx->pc != 0x20D6C4u) { return; }
    }
    ctx->pc = 0x20D6C4u;
label_20d6c4:
    // 0x20d6c4: 0xc0a248c  jal         func_289230
label_20d6c8:
    if (ctx->pc == 0x20D6C8u) {
        ctx->pc = 0x20D6C8u;
            // 0x20d6c8: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20D6CCu;
        goto label_20d6cc;
    }
    ctx->pc = 0x20D6C4u;
    SET_GPR_U32(ctx, 31, 0x20D6CCu);
    ctx->pc = 0x20D6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6C4u;
            // 0x20d6c8: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6CCu; }
        if (ctx->pc != 0x20D6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6CCu; }
        if (ctx->pc != 0x20D6CCu) { return; }
    }
    ctx->pc = 0x20D6CCu;
label_20d6cc:
    // 0x20d6cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20d6d0:
    // 0x20d6d0: 0xc0a248c  jal         func_289230
label_20d6d4:
    if (ctx->pc == 0x20D6D4u) {
        ctx->pc = 0x20D6D4u;
            // 0x20d6d4: 0xc7ac0094  lwc1        $f12, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20D6D8u;
        goto label_20d6d8;
    }
    ctx->pc = 0x20D6D0u;
    SET_GPR_U32(ctx, 31, 0x20D6D8u);
    ctx->pc = 0x20D6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6D0u;
            // 0x20d6d4: 0xc7ac0094  lwc1        $f12, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6D8u; }
        if (ctx->pc != 0x20D6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D6D8u; }
        if (ctx->pc != 0x20D6D8u) { return; }
    }
    ctx->pc = 0x20D6D8u;
label_20d6d8:
    // 0x20d6d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20d6dc:
    // 0x20d6dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d6e0:
    // 0x20d6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d6e4:
    // 0x20d6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d6e8:
    // 0x20d6e8: 0x3e00008  jr          $ra
label_20d6ec:
    if (ctx->pc == 0x20D6ECu) {
        ctx->pc = 0x20D6ECu;
            // 0x20d6ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20D6F0u;
        goto label_fallthrough_0x20d6e8;
    }
    ctx->pc = 0x20D6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D6E8u;
            // 0x20d6ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d6e8:
    ctx->pc = 0x20D6F0u;
}
