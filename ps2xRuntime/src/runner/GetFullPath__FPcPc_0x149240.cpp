#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFullPath__FPcPc
// Address: 0x149240 - 0x14931c
void GetFullPath__FPcPc_0x149240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFullPath__FPcPc_0x149240");
#endif

    switch (ctx->pc) {
        case 0x149260u: goto label_149260;
        case 0x1492a0u: goto label_1492a0;
        case 0x1492bcu: goto label_1492bc;
        case 0x1492c8u: goto label_1492c8;
        case 0x1492e0u: goto label_1492e0;
        case 0x1492ecu: goto label_1492ec;
        case 0x149300u: goto label_149300;
        default: break;
    }

    ctx->pc = 0x149240u;

    // 0x149240: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x149240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x149244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14924c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149254: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x149254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149258: 0xc052434  jal         func_1490D0
    ctx->pc = 0x149258u;
    SET_GPR_U32(ctx, 31, 0x149260u);
    ctx->pc = 0x14925Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149258u;
            // 0x14925c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (runtime->hasFunction(0x1490D0u)) {
        auto targetFn = runtime->lookupFunction(0x1490D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149260u; }
        if (ctx->pc != 0x149260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDevType__FPcPc_0x1490d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149260u; }
        if (ctx->pc != 0x149260u) { return; }
    }
    ctx->pc = 0x149260u;
label_149260:
    // 0x149260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149264: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x149264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149268: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149268u;
    {
        const bool branch_taken_0x149268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149268u;
            // 0x14926c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149268) {
            ctx->pc = 0x149278u;
            goto label_149278;
        }
    }
    ctx->pc = 0x149270u;
    // 0x149270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x149270u;
    {
        const bool branch_taken_0x149270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149270u;
            // 0x149274: 0x8f908028  lw          $s0, -0x7FD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149270) {
            ctx->pc = 0x14927Cu;
            goto label_14927c;
        }
    }
    ctx->pc = 0x149278u;
label_149278:
    // 0x149278: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14927c:
    // 0x14927c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x149280: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x149284: 0x2442ab80  addiu       $v0, $v0, -0x5480
    ctx->pc = 0x149284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945664));
    // 0x149288: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x149288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14928c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14928Cu;
    {
        const bool branch_taken_0x14928c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14928Cu;
            // 0x149290: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14928c) {
            ctx->pc = 0x1492A0u;
            goto label_1492a0;
        }
    }
    ctx->pc = 0x149294u;
    // 0x149294: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x149298: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x149298u;
    SET_GPR_U32(ctx, 31, 0x1492A0u);
    ctx->pc = 0x14929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149298u;
            // 0x14929c: 0x24a527b8  addiu       $a1, $a1, 0x27B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A0u; }
        if (ctx->pc != 0x1492A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A0u; }
        if (ctx->pc != 0x1492A0u) { return; }
    }
    ctx->pc = 0x1492A0u;
label_1492a0:
    // 0x1492a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1492a4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1492A4u;
    {
        const bool branch_taken_0x1492a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1492A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1492A4u;
            // 0x1492a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492a4) {
            ctx->pc = 0x1492C0u;
            goto label_1492c0;
        }
    }
    ctx->pc = 0x1492ACu;
    // 0x1492ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1492b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1492b4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1492B4u;
    SET_GPR_U32(ctx, 31, 0x1492BCu);
    ctx->pc = 0x1492B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492B4u;
            // 0x1492b8: 0x24a527e0  addiu       $a1, $a1, 0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492BCu; }
        if (ctx->pc != 0x1492BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492BCu; }
        if (ctx->pc != 0x1492BCu) { return; }
    }
    ctx->pc = 0x1492BCu;
label_1492bc:
    // 0x1492bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1492bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1492c0:
    // 0x1492c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1492C0u;
    SET_GPR_U32(ctx, 31, 0x1492C8u);
    ctx->pc = 0x1492C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492C0u;
            // 0x1492c4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492C8u; }
        if (ctx->pc != 0x1492C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492C8u; }
        if (ctx->pc != 0x1492C8u) { return; }
    }
    ctx->pc = 0x1492C8u;
label_1492c8:
    // 0x1492c8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1492C8u;
    {
        const bool branch_taken_0x1492c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1492CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1492C8u;
            // 0x1492cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492c8) {
            ctx->pc = 0x1492E4u;
            goto label_1492e4;
        }
    }
    ctx->pc = 0x1492D0u;
    // 0x1492d0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1492d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1492d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492d8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1492D8u;
    SET_GPR_U32(ctx, 31, 0x1492E0u);
    ctx->pc = 0x1492DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492D8u;
            // 0x1492dc: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492E0u; }
        if (ctx->pc != 0x1492E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492E0u; }
        if (ctx->pc != 0x1492E0u) { return; }
    }
    ctx->pc = 0x1492E0u;
label_1492e0:
    // 0x1492e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1492e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1492e4:
    // 0x1492e4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1492E4u;
    SET_GPR_U32(ctx, 31, 0x1492ECu);
    ctx->pc = 0x1492E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492E4u;
            // 0x1492e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492ECu; }
        if (ctx->pc != 0x1492ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492ECu; }
        if (ctx->pc != 0x1492ECu) { return; }
    }
    ctx->pc = 0x1492ECu;
label_1492ec:
    // 0x1492ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1492f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1492F0u;
    {
        const bool branch_taken_0x1492f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1492F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1492F0u;
            // 0x1492f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492f0) {
            ctx->pc = 0x149304u;
            goto label_149304;
        }
    }
    ctx->pc = 0x1492F8u;
    // 0x1492f8: 0xc05247c  jal         func_1491F0
    ctx->pc = 0x1492F8u;
    SET_GPR_U32(ctx, 31, 0x149300u);
    ctx->pc = 0x1492FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492F8u;
            // 0x1492fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (runtime->hasFunction(0x1491F0u)) {
        auto targetFn = runtime->lookupFunction(0x1491F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149300u; }
        if (ctx->pc != 0x149300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvStr__FPc_0x1491f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149300u; }
        if (ctx->pc != 0x149300u) { return; }
    }
    ctx->pc = 0x149300u;
label_149300:
    // 0x149300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x149300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149304:
    // 0x149304: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14930c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14930cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149314: 0x3e00008  jr          $ra
    ctx->pc = 0x149314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149314u;
            // 0x149318: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14931Cu;
}
