#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_ETC__FP12RS_STACKDATAi
// Address: 0x26d450 - 0x26d6d0
void ps2__SET_MES_ETC__FP12RS_STACKDATAi_0x26d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_ETC__FP12RS_STACKDATAi_0x26d450");
#endif

    switch (ctx->pc) {
        case 0x26d474u: goto label_26d474;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d498u: goto label_26d498;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d514u: goto label_26d514;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d538u: goto label_26d538;
        case 0x26d558u: goto label_26d558;
        case 0x26d578u: goto label_26d578;
        case 0x26d588u: goto label_26d588;
        case 0x26d598u: goto label_26d598;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d614u: goto label_26d614;
        case 0x26d624u: goto label_26d624;
        case 0x26d634u: goto label_26d634;
        case 0x26d640u: goto label_26d640;
        case 0x26d660u: goto label_26d660;
        case 0x26d670u: goto label_26d670;
        case 0x26d684u: goto label_26d684;
        case 0x26d690u: goto label_26d690;
        case 0x26d6a0u: goto label_26d6a0;
        default: break;
    }

    ctx->pc = 0x26d450u;

    // 0x26d450: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x26d454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26d458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26d45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d464: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26d464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26d468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d46c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D46Cu;
    SET_GPR_U32(ctx, 31, 0x26D474u);
    ctx->pc = 0x26D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D46Cu;
            // 0x26d470: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D474u; }
        if (ctx->pc != 0x26D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D474u; }
        if (ctx->pc != 0x26D474u) { return; }
    }
    ctx->pc = 0x26D474u;
label_26d474:
    // 0x26d474: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D474u;
    SET_GPR_U32(ctx, 31, 0x26D47Cu);
    ctx->pc = 0x26D478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D474u;
            // 0x26d478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D47Cu; }
        if (ctx->pc != 0x26D47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D47Cu; }
        if (ctx->pc != 0x26D47Cu) { return; }
    }
    ctx->pc = 0x26D47Cu;
label_26d47c:
    // 0x26d47c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d480: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D480u;
    {
        const bool branch_taken_0x26d480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D480u;
            // 0x26d484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d480) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D488u;
    // 0x26d488: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x26D488u;
    {
        const bool branch_taken_0x26d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D488u;
            // 0x26d48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d488) {
            ctx->pc = 0x26D6B4u;
            goto label_26d6b4;
        }
    }
    ctx->pc = 0x26D490u;
label_26d490:
    // 0x26d490: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D490u;
    SET_GPR_U32(ctx, 31, 0x26D498u);
    ctx->pc = 0x26D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D490u;
            // 0x26d494: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D498u; }
        if (ctx->pc != 0x26D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D498u; }
        if (ctx->pc != 0x26D498u) { return; }
    }
    ctx->pc = 0x26D498u;
label_26d498:
    // 0x26d498: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x26d49c: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x26D49Cu;
    {
        const bool branch_taken_0x26d49c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D49Cu;
            // 0x26d4a0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d49c) {
            ctx->pc = 0x26D6A8u;
            goto label_26d6a8;
        }
    }
    ctx->pc = 0x26D4A4u;
    // 0x26d4a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d4a8: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x26d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x26d4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d4b4: 0x400008  jr          $v0
    ctx->pc = 0x26D4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D4BCu: goto label_26d4bc;
            case 0x26D4CCu: goto label_26d4cc;
            case 0x26D4DCu: goto label_26d4dc;
            case 0x26D4F8u: goto label_26d4f8;
            case 0x26D560u: goto label_26d560;
            case 0x26D5ACu: goto label_26d5ac;
            case 0x26D5E0u: goto label_26d5e0;
            case 0x26D608u: goto label_26d608;
            case 0x26D668u: goto label_26d668;
            case 0x26D678u: goto label_26d678;
            case 0x26D698u: goto label_26d698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D4BCu;
label_26d4bc:
    // 0x26d4bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D4BCu;
    SET_GPR_U32(ctx, 31, 0x26D4C4u);
    ctx->pc = 0x26D4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4BCu;
            // 0x26d4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4C4u; }
        if (ctx->pc != 0x26D4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4C4u; }
        if (ctx->pc != 0x26D4C4u) { return; }
    }
    ctx->pc = 0x26D4C4u;
label_26d4c4:
    // 0x26d4c4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x26D4C4u;
    {
        const bool branch_taken_0x26d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4C4u;
            // 0x26d4c8: 0xae0217fc  sw          $v0, 0x17FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4c4) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D4CCu;
label_26d4cc:
    // 0x26d4cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D4CCu;
    SET_GPR_U32(ctx, 31, 0x26D4D4u);
    ctx->pc = 0x26D4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4CCu;
            // 0x26d4d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4D4u; }
        if (ctx->pc != 0x26D4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4D4u; }
        if (ctx->pc != 0x26D4D4u) { return; }
    }
    ctx->pc = 0x26D4D4u;
label_26d4d4:
    // 0x26d4d4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x26D4D4u;
    {
        const bool branch_taken_0x26d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4D4u;
            // 0x26d4d8: 0xae021afc  sw          $v0, 0x1AFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4d4) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D4DCu;
label_26d4dc:
    // 0x26d4dc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26D4DCu;
    SET_GPR_U32(ctx, 31, 0x26D4E4u);
    ctx->pc = 0x26D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4DCu;
            // 0x26d4e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4E4u; }
        if (ctx->pc != 0x26D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4E4u; }
        if (ctx->pc != 0x26D4E4u) { return; }
    }
    ctx->pc = 0x26D4E4u;
label_26d4e4:
    // 0x26d4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d4e8: 0xc054a98  jal         func_152A60
    ctx->pc = 0x26D4E8u;
    SET_GPR_U32(ctx, 31, 0x26D4F0u);
    ctx->pc = 0x26D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4E8u;
            // 0x26d4ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A60u;
    if (runtime->hasFunction(0x152A60u)) {
        auto targetFn = runtime->lookupFunction(0x152A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4F0u; }
        if (ctx->pc != 0x26D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHalfFontWPercent__6ClsMesFf_0x152a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D4F0u; }
        if (ctx->pc != 0x26D4F0u) { return; }
    }
    ctx->pc = 0x26D4F0u;
label_26d4f0:
    // 0x26d4f0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x26D4F0u;
    {
        const bool branch_taken_0x26d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4F0u;
            // 0x26d4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4f0) {
            ctx->pc = 0x26D6B4u;
            goto label_26d6b4;
        }
    }
    ctx->pc = 0x26D4F8u;
label_26d4f8:
    // 0x26d4f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26d4fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d500: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26D500u;
    SET_GPR_U32(ctx, 31, 0x26D508u);
    ctx->pc = 0x26D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D500u;
            // 0x26d504: 0x24a5c970  addiu       $a1, $a1, -0x3690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D508u; }
        if (ctx->pc != 0x26D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D508u; }
        if (ctx->pc != 0x26D508u) { return; }
    }
    ctx->pc = 0x26D508u;
label_26d508:
    // 0x26d508: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d50c:
    // 0x26d50c: 0xc0684b8  jal         func_1A12E0
    ctx->pc = 0x26D50Cu;
    SET_GPR_U32(ctx, 31, 0x26D514u);
    ctx->pc = 0x26D510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D50Cu;
            // 0x26d510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A12E0u;
    if (runtime->hasFunction(0x1A12E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D514u; }
        if (ctx->pc != 0x26D514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFish0__Fi_0x1a12e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D514u; }
        if (ctx->pc != 0x26D514u) { return; }
    }
    ctx->pc = 0x26D514u;
label_26d514:
    // 0x26d514: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d518: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D518u;
    {
        const bool branch_taken_0x26d518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D518u;
            // 0x26d51c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d518) {
            ctx->pc = 0x26D538u;
            goto label_26d538;
        }
    }
    ctx->pc = 0x26D520u;
    // 0x26d520: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d524: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26D524u;
    SET_GPR_U32(ctx, 31, 0x26D52Cu);
    ctx->pc = 0x26D528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D524u;
            // 0x26d528: 0x24a5c980  addiu       $a1, $a1, -0x3680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D52Cu; }
        if (ctx->pc != 0x26D52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D52Cu; }
        if (ctx->pc != 0x26D52Cu) { return; }
    }
    ctx->pc = 0x26D52Cu;
label_26d52c:
    // 0x26d52c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26d52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d530: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26D530u;
    SET_GPR_U32(ctx, 31, 0x26D538u);
    ctx->pc = 0x26D534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D530u;
            // 0x26d534: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D538u; }
        if (ctx->pc != 0x26D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D538u; }
        if (ctx->pc != 0x26D538u) { return; }
    }
    ctx->pc = 0x26D538u;
label_26d538:
    // 0x26d538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26d538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26d53c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x26d53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26d540: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x26D540u;
    {
        const bool branch_taken_0x26d540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D540u;
            // 0x26d544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d540) {
            ctx->pc = 0x26D50Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d50c;
        }
    }
    ctx->pc = 0x26D548u;
    // 0x26d548: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26d54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d550: 0xc05638c  jal         func_158E30
    ctx->pc = 0x26D550u;
    SET_GPR_U32(ctx, 31, 0x26D558u);
    ctx->pc = 0x26D554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D550u;
            // 0x26d554: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D558u; }
        if (ctx->pc != 0x26D558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D558u; }
        if (ctx->pc != 0x26D558u) { return; }
    }
    ctx->pc = 0x26D558u;
label_26d558:
    // 0x26d558: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x26D558u;
    {
        const bool branch_taken_0x26d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d558) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D560u;
label_26d560:
    // 0x26d560: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x26d560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x26d564: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26D564u;
    {
        const bool branch_taken_0x26d564 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D564u;
            // 0x26d568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d564) {
            ctx->pc = 0x26D590u;
            goto label_26d590;
        }
    }
    ctx->pc = 0x26D56Cu;
    // 0x26d56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d570: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D570u;
    SET_GPR_U32(ctx, 31, 0x26D578u);
    ctx->pc = 0x26D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D570u;
            // 0x26d574: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D578u; }
        if (ctx->pc != 0x26D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D578u; }
        if (ctx->pc != 0x26D578u) { return; }
    }
    ctx->pc = 0x26D578u;
label_26d578:
    // 0x26d578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d57c: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x26d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x26d580: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D580u;
    SET_GPR_U32(ctx, 31, 0x26D588u);
    ctx->pc = 0x26D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D580u;
            // 0x26d584: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D588u; }
        if (ctx->pc != 0x26D588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D588u; }
        if (ctx->pc != 0x26D588u) { return; }
    }
    ctx->pc = 0x26D588u;
label_26d588:
    // 0x26d588: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x26d588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x26d58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d590:
    // 0x26d590: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D590u;
    SET_GPR_U32(ctx, 31, 0x26D598u);
    ctx->pc = 0x26D594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D590u;
            // 0x26d594: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D598u; }
        if (ctx->pc != 0x26D598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D598u; }
        if (ctx->pc != 0x26D598u) { return; }
    }
    ctx->pc = 0x26D598u;
label_26d598:
    // 0x26d598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d59c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D59Cu;
    SET_GPR_U32(ctx, 31, 0x26D5A4u);
    ctx->pc = 0x26D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D59Cu;
            // 0x26d5a0: 0xae020198  sw          $v0, 0x198($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5A4u; }
        if (ctx->pc != 0x26D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5A4u; }
        if (ctx->pc != 0x26D5A4u) { return; }
    }
    ctx->pc = 0x26D5A4u;
label_26d5a4:
    // 0x26d5a4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26D5A4u;
    {
        const bool branch_taken_0x26d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5A4u;
            // 0x26d5a8: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5a4) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D5ACu;
label_26d5ac:
    // 0x26d5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D5B0u;
    SET_GPR_U32(ctx, 31, 0x26D5B8u);
    ctx->pc = 0x26D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5B0u;
            // 0x26d5b4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5B8u; }
        if (ctx->pc != 0x26D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5B8u; }
        if (ctx->pc != 0x26D5B8u) { return; }
    }
    ctx->pc = 0x26D5B8u;
label_26d5b8:
    // 0x26d5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D5BCu;
    SET_GPR_U32(ctx, 31, 0x26D5C4u);
    ctx->pc = 0x26D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5BCu;
            // 0x26d5c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5C4u; }
        if (ctx->pc != 0x26D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5C4u; }
        if (ctx->pc != 0x26D5C4u) { return; }
    }
    ctx->pc = 0x26D5C4u;
label_26d5c4:
    // 0x26d5c4: 0x620003a  bltz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x26D5C4u;
    {
        const bool branch_taken_0x26d5c4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x26D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5C4u;
            // 0x26d5c8: 0x2a210014  slti        $at, $s1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5c4) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D5CCu;
    // 0x26d5cc: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x26D5CCu;
    {
        const bool branch_taken_0x26d5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5CCu;
            // 0x26d5d0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5cc) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D5D4u;
    // 0x26d5d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d5d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x26D5D8u;
    {
        const bool branch_taken_0x26d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5D8u;
            // 0x26d5dc: 0xac621c84  sw          $v0, 0x1C84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5d8) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D5E0u;
label_26d5e0:
    // 0x26d5e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D5E4u;
    SET_GPR_U32(ctx, 31, 0x26D5ECu);
    ctx->pc = 0x26D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5E4u;
            // 0x26d5e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5ECu; }
        if (ctx->pc != 0x26D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5ECu; }
        if (ctx->pc != 0x26D5ECu) { return; }
    }
    ctx->pc = 0x26D5ECu;
label_26d5ec:
    // 0x26d5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D5F0u;
    SET_GPR_U32(ctx, 31, 0x26D5F8u);
    ctx->pc = 0x26D5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5F0u;
            // 0x26d5f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5F8u; }
        if (ctx->pc != 0x26D5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D5F8u; }
        if (ctx->pc != 0x26D5F8u) { return; }
    }
    ctx->pc = 0x26D5F8u;
label_26d5f8:
    // 0x26d5f8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26d5fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d600: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26D600u;
    {
        const bool branch_taken_0x26d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D600u;
            // 0x26d604: 0xac621e64  sw          $v0, 0x1E64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d600) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D608u;
label_26d608:
    // 0x26d608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d60c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D60Cu;
    SET_GPR_U32(ctx, 31, 0x26D614u);
    ctx->pc = 0x26D610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D60Cu;
            // 0x26d610: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D614u; }
        if (ctx->pc != 0x26D614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D614u; }
        if (ctx->pc != 0x26D614u) { return; }
    }
    ctx->pc = 0x26D614u;
label_26d614:
    // 0x26d614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d61c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D61Cu;
    SET_GPR_U32(ctx, 31, 0x26D624u);
    ctx->pc = 0x26D620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D61Cu;
            // 0x26d620: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D624u; }
        if (ctx->pc != 0x26D624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D624u; }
        if (ctx->pc != 0x26D624u) { return; }
    }
    ctx->pc = 0x26D624u;
label_26d624:
    // 0x26d624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d628: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d62c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D62Cu;
    SET_GPR_U32(ctx, 31, 0x26D634u);
    ctx->pc = 0x26D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D62Cu;
            // 0x26d630: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D634u; }
        if (ctx->pc != 0x26D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D634u; }
        if (ctx->pc != 0x26D634u) { return; }
    }
    ctx->pc = 0x26D634u;
label_26d634:
    // 0x26d634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d638: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D638u;
    SET_GPR_U32(ctx, 31, 0x26D640u);
    ctx->pc = 0x26D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D638u;
            // 0x26d63c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D640u; }
        if (ctx->pc != 0x26D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D640u; }
        if (ctx->pc != 0x26D640u) { return; }
    }
    ctx->pc = 0x26D640u;
label_26d640:
    // 0x26d640: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x26d644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d648: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x26d64c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26d64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d650: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x26d650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x26d654: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d658: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x26D658u;
    SET_GPR_U32(ctx, 31, 0x26D660u);
    ctx->pc = 0x26D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D658u;
            // 0x26d65c: 0x2222825  or          $a1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D660u; }
        if (ctx->pc != 0x26D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D660u; }
        if (ctx->pc != 0x26D660u) { return; }
    }
    ctx->pc = 0x26D660u;
label_26d660:
    // 0x26d660: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26D660u;
    {
        const bool branch_taken_0x26d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d660) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D668u;
label_26d668:
    // 0x26d668: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D668u;
    SET_GPR_U32(ctx, 31, 0x26D670u);
    ctx->pc = 0x26D66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D668u;
            // 0x26d66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D670u; }
        if (ctx->pc != 0x26D670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D670u; }
        if (ctx->pc != 0x26D670u) { return; }
    }
    ctx->pc = 0x26D670u;
label_26d670:
    // 0x26d670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26D670u;
    {
        const bool branch_taken_0x26d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D670u;
            // 0x26d674: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d670) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D678u;
label_26d678:
    // 0x26d678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d67c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D67Cu;
    SET_GPR_U32(ctx, 31, 0x26D684u);
    ctx->pc = 0x26D680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D67Cu;
            // 0x26d680: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D684u; }
        if (ctx->pc != 0x26D684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D684u; }
        if (ctx->pc != 0x26D684u) { return; }
    }
    ctx->pc = 0x26D684u;
label_26d684:
    // 0x26d684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d688: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D688u;
    SET_GPR_U32(ctx, 31, 0x26D690u);
    ctx->pc = 0x26D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D688u;
            // 0x26d68c: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D690u; }
        if (ctx->pc != 0x26D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D690u; }
        if (ctx->pc != 0x26D690u) { return; }
    }
    ctx->pc = 0x26D690u;
label_26d690:
    // 0x26d690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D690u;
    {
        const bool branch_taken_0x26d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D690u;
            // 0x26d694: 0xae0201a4  sw          $v0, 0x1A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d690) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D698u;
label_26d698:
    // 0x26d698: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D698u;
    SET_GPR_U32(ctx, 31, 0x26D6A0u);
    ctx->pc = 0x26D69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D698u;
            // 0x26d69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6A0u; }
        if (ctx->pc != 0x26D6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D6A0u; }
        if (ctx->pc != 0x26D6A0u) { return; }
    }
    ctx->pc = 0x26D6A0u;
label_26d6a0:
    // 0x26d6a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D6A0u;
    {
        const bool branch_taken_0x26d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6A0u;
            // 0x26d6a4: 0xa2021800  sb          $v0, 0x1800($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6a0) {
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D6A8u;
label_26d6a8:
    // 0x26d6a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D6A8u;
    {
        const bool branch_taken_0x26d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6A8u;
            // 0x26d6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6a8) {
            ctx->pc = 0x26D6B4u;
            goto label_26d6b4;
        }
    }
    ctx->pc = 0x26D6B0u;
label_26d6b0:
    // 0x26d6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d6b4:
    // 0x26d6b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d6b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26d6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d6bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26D6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6C8u;
            // 0x26d6cc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D6D0u;
}
