#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_CREATE__FP12RS_STACKDATAi
// Address: 0x2e8760 - 0x2e8838
void ps2__ES_CREATE__FP12RS_STACKDATAi_0x2e8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_CREATE__FP12RS_STACKDATAi_0x2e8760");
#endif

    switch (ctx->pc) {
        case 0x2e877cu: goto label_2e877c;
        case 0x2e87b4u: goto label_2e87b4;
        case 0x2e87dcu: goto label_2e87dc;
        case 0x2e87ecu: goto label_2e87ec;
        case 0x2e8810u: goto label_2e8810;
        default: break;
    }

    ctx->pc = 0x2e8760u;

    // 0x2e8760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8764: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2e8764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e876c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e876cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8774: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E8774u;
    SET_GPR_U32(ctx, 31, 0x2E877Cu);
    ctx->pc = 0x2E8778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8774u;
            // 0x2e8778: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E877Cu; }
        if (ctx->pc != 0x2E877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E877Cu; }
        if (ctx->pc != 0x2E877Cu) { return; }
    }
    ctx->pc = 0x2E877Cu;
label_2e877c:
    // 0x2e877c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e877cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8784: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8784u;
    {
        const bool branch_taken_0x2e8784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8784u;
            // 0x2e8788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8784) {
            ctx->pc = 0x2E87BCu;
            goto label_2e87bc;
        }
    }
    ctx->pc = 0x2E878Cu;
    // 0x2e878c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E878Cu;
    {
        const bool branch_taken_0x2e878c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e878c) {
            ctx->pc = 0x2E879Cu;
            goto label_2e879c;
        }
    }
    ctx->pc = 0x2E8794u;
    // 0x2e8794: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E8794u;
    {
        const bool branch_taken_0x2e8794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8794u;
            // 0x2e8798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8794) {
            ctx->pc = 0x2E8818u;
            goto label_2e8818;
        }
    }
    ctx->pc = 0x2E879Cu;
label_2e879c:
    // 0x2e879c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e87a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e87a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87a4: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e87a8: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e87a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e87ac: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2E87ACu;
    SET_GPR_U32(ctx, 31, 0x2E87B4u);
    ctx->pc = 0x2E87B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87ACu;
            // 0x2e87b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87B4u; }
        if (ctx->pc != 0x2E87B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87B4u; }
        if (ctx->pc != 0x2E87B4u) { return; }
    }
    ctx->pc = 0x2E87B4u;
label_2e87b4:
    // 0x2e87b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E87B4u;
    {
        const bool branch_taken_0x2e87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87B4u;
            // 0x2e87b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87b4) {
            ctx->pc = 0x2E8824u;
            goto label_2e8824;
        }
    }
    ctx->pc = 0x2E87BCu;
label_2e87bc:
    // 0x2e87bc: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e87c0: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e87c4: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E87C4u;
    {
        const bool branch_taken_0x2e87c4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E87C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87C4u;
            // 0x2e87c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87c4) {
            ctx->pc = 0x2E87E4u;
            goto label_2e87e4;
        }
    }
    ctx->pc = 0x2E87CCu;
    // 0x2e87cc: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e87d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e87d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87d4: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2E87D4u;
    SET_GPR_U32(ctx, 31, 0x2E87DCu);
    ctx->pc = 0x2E87D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87D4u;
            // 0x2e87d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87DCu; }
        if (ctx->pc != 0x2E87DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87DCu; }
        if (ctx->pc != 0x2E87DCu) { return; }
    }
    ctx->pc = 0x2E87DCu;
label_2e87dc:
    // 0x2e87dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e87dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e87e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e87e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e87e4:
    // 0x2e87e4: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E87E4u;
    SET_GPR_U32(ctx, 31, 0x2E87ECu);
    ctx->pc = 0x2E87E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E87E4u;
            // 0x2e87e8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87ECu; }
        if (ctx->pc != 0x2E87ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E87ECu; }
        if (ctx->pc != 0x2E87ECu) { return; }
    }
    ctx->pc = 0x2E87ECu;
label_2e87ec:
    // 0x2e87ec: 0x28e10000  slti        $at, $a3, 0x0
    ctx->pc = 0x2e87ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2e87f0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2E87F0u;
    {
        const bool branch_taken_0x2e87f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87f0) {
            ctx->pc = 0x2E8820u;
            goto label_2e8820;
        }
    }
    ctx->pc = 0x2E87F8u;
    // 0x2e87f8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e87fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8804: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8808: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E8808u;
    SET_GPR_U32(ctx, 31, 0x2E8810u);
    ctx->pc = 0x2E880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8808u;
            // 0x2e880c: 0x248413e0  addiu       $a0, $a0, 0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8810u; }
        if (ctx->pc != 0x2E8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8810u; }
        if (ctx->pc != 0x2E8810u) { return; }
    }
    ctx->pc = 0x2E8810u;
label_2e8810:
    // 0x2e8810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8810u;
    {
        const bool branch_taken_0x2e8810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8810) {
            ctx->pc = 0x2E8820u;
            goto label_2e8820;
        }
    }
    ctx->pc = 0x2E8818u;
label_2e8818:
    // 0x2e8818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8818u;
    {
        const bool branch_taken_0x2e8818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8818u;
            // 0x2e881c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8818) {
            ctx->pc = 0x2E8828u;
            goto label_2e8828;
        }
    }
    ctx->pc = 0x2E8820u;
label_2e8820:
    // 0x2e8820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8824:
    // 0x2e8824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8828:
    // 0x2e8828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e882c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e882cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8830: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8830u;
            // 0x2e8834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8838u;
}
