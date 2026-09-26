#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPCPFile__8CMdsListFPcPUiP9mgCMemoryi
// Address: 0x1696b0 - 0x169878
void LoadPCPFile__8CMdsListFPcPUiP9mgCMemoryi_0x1696b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPCPFile__8CMdsListFPcPUiP9mgCMemoryi_0x1696b0");
#endif

    switch (ctx->pc) {
        case 0x1696ecu: goto label_1696ec;
        case 0x16970cu: goto label_16970c;
        case 0x169730u: goto label_169730;
        case 0x169754u: goto label_169754;
        case 0x169764u: goto label_169764;
        case 0x169784u: goto label_169784;
        case 0x169794u: goto label_169794;
        case 0x1697bcu: goto label_1697bc;
        case 0x1697ccu: goto label_1697cc;
        case 0x1697e8u: goto label_1697e8;
        case 0x169824u: goto label_169824;
        case 0x169830u: goto label_169830;
        case 0x169840u: goto label_169840;
        case 0x169850u: goto label_169850;
        case 0x169858u: goto label_169858;
        default: break;
    }

    ctx->pc = 0x1696b0u;

    // 0x1696b0: 0x27bde0c0  addiu       $sp, $sp, -0x1F40
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959296));
    // 0x1696b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1696b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1696b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1696b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1696bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1696bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1696c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1696c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1696c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1696c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1696c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1696ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1696d0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1696d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1696d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1696d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1696d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1696dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1696e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696e4: 0xc0527dc  jal         func_149F70
    ctx->pc = 0x1696E4u;
    SET_GPR_U32(ctx, 31, 0x1696ECu);
    ctx->pc = 0x1696E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1696E4u;
            // 0x1696e8: 0xaf908978  sw          $s0, -0x7688($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F70u;
    if (runtime->hasFunction(0x149F70u)) {
        auto targetFn = runtime->lookupFunction(0x149F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696ECu; }
        if (ctx->pc != 0x1696ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileNum__FPUi_0x149f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696ECu; }
        if (ctx->pc != 0x1696ECu) { return; }
    }
    ctx->pc = 0x1696ECu;
label_1696ec:
    // 0x1696ec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1696ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1696f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1696f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696f4: 0x24a53500  addiu       $a1, $a1, 0x3500
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13568));
    // 0x1696f8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1696f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1696fc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1696fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x169700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169704: 0xc052788  jal         func_149E20
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169704u;
            // 0x169708: 0x27a90860  addiu       $t1, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16970Cu; }
        if (ctx->pc != 0x16970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16970Cu; }
        if (ctx->pc != 0x16970Cu) { return; }
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16970cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169710: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x169714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169718: 0x24a53508  addiu       $a1, $a1, 0x3508
    ctx->pc = 0x169718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13576));
    // 0x16971c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x169720: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x169720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x169724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x169724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169728: 0xc052788  jal         func_149E20
    ctx->pc = 0x169728u;
    SET_GPR_U32(ctx, 31, 0x169730u);
    ctx->pc = 0x16972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169728u;
            // 0x16972c: 0x27a90860  addiu       $t1, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169730u; }
        if (ctx->pc != 0x169730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169730u; }
        if (ctx->pc != 0x169730u) { return; }
    }
    ctx->pc = 0x169730u;
label_169730:
    // 0x169730: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x169730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169734: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169738: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16973c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169740: 0x28a20200  slti        $v0, $a1, 0x200
    ctx->pc = 0x169740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x169744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169744u;
    {
        const bool branch_taken_0x169744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169744u;
            // 0x169748: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169744) {
            ctx->pc = 0x169754u;
            goto label_169754;
        }
    }
    ctx->pc = 0x16974Cu;
    // 0x16974c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x16974Cu;
    SET_GPR_U32(ctx, 31, 0x169754u);
    ctx->pc = 0x169750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16974Cu;
            // 0x169750: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169754u; }
        if (ctx->pc != 0x169754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169754u; }
        if (ctx->pc != 0x169754u) { return; }
    }
    ctx->pc = 0x169754u;
label_169754:
    // 0x169754: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x169754u;
    {
        const bool branch_taken_0x169754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169754u;
            // 0x169758: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169754) {
            ctx->pc = 0x169794u;
            goto label_169794;
        }
    }
    ctx->pc = 0x16975Cu;
    // 0x16975c: 0xc04a422  jal         func_129088
    ctx->pc = 0x16975Cu;
    SET_GPR_U32(ctx, 31, 0x169764u);
    ctx->pc = 0x169760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16975Cu;
            // 0x169760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169764u; }
        if (ctx->pc != 0x169764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169764u; }
        if (ctx->pc != 0x169764u) { return; }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169768: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x169768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x16976c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16976Cu;
    {
        const bool branch_taken_0x16976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16976Cu;
            // 0x169770: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16976c) {
            ctx->pc = 0x16977Cu;
            goto label_16977c;
        }
    }
    ctx->pc = 0x169774u;
    // 0x169774: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x169778: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16977c:
    // 0x16977c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x16977Cu;
    SET_GPR_U32(ctx, 31, 0x169784u);
    ctx->pc = 0x169780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16977Cu;
            // 0x169780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169784u; }
        if (ctx->pc != 0x169784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169784u; }
        if (ctx->pc != 0x169784u) { return; }
    }
    ctx->pc = 0x169784u;
label_169784:
    // 0x169784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x169784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x169788: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16978c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x16978Cu;
    SET_GPR_U32(ctx, 31, 0x169794u);
    ctx->pc = 0x169790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16978Cu;
            // 0x169790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169794u; }
        if (ctx->pc != 0x169794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169794u; }
        if (ctx->pc != 0x169794u) { return; }
    }
    ctx->pc = 0x169794u;
label_169794:
    // 0x169794: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169798: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x16979c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x16979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1697a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1697A0u;
    {
        const bool branch_taken_0x1697a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697A0u;
            // 0x1697a4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a0) {
            ctx->pc = 0x1697B0u;
            goto label_1697b0;
        }
    }
    ctx->pc = 0x1697A8u;
    // 0x1697a8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1697ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1697b0:
    // 0x1697b0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1697b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1697b4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1697B4u;
    SET_GPR_U32(ctx, 31, 0x1697BCu);
    ctx->pc = 0x1697B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697B4u;
            // 0x1697b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697BCu; }
        if (ctx->pc != 0x1697BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697BCu; }
        if (ctx->pc != 0x1697BCu) { return; }
    }
    ctx->pc = 0x1697BCu;
label_1697bc:
    // 0x1697bc: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x1697bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1697c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1697c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697c4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1697C4u;
    SET_GPR_U32(ctx, 31, 0x1697CCu);
    ctx->pc = 0x1697C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697C4u;
            // 0x1697c8: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697CCu; }
        if (ctx->pc != 0x1697CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697CCu; }
        if (ctx->pc != 0x1697CCu) { return; }
    }
    ctx->pc = 0x1697CCu;
label_1697cc:
    // 0x1697cc: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1697ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1697d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1697d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1697d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697d8: 0x24a59880  addiu       $a1, $a1, -0x6780
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940800));
    // 0x1697dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1697dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e0: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1697E0u;
    SET_GPR_U32(ctx, 31, 0x1697E8u);
    ctx->pc = 0x1697E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697E0u;
            // 0x1697e4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697E8u; }
        if (ctx->pc != 0x1697E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697E8u; }
        if (ctx->pc != 0x1697E8u) { return; }
    }
    ctx->pc = 0x1697E8u;
label_1697e8:
    // 0x1697e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1697e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1697ec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1697ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1697f0: 0xaf808970  sw          $zero, -0x7690($gp)
    ctx->pc = 0x1697f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 0));
    // 0x1697f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1697f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1697f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1697fc: 0x24a534f0  addiu       $a1, $a1, 0x34F0
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13552));
    // 0x169800: 0x27a61f3c  addiu       $a2, $sp, 0x1F3C
    ctx->pc = 0x169800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 7996));
    // 0x169804: 0xaf828974  sw          $v0, -0x768C($gp)
    ctx->pc = 0x169804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 2));
    // 0x169808: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16980c: 0xaf82897c  sw          $v0, -0x7684($gp)
    ctx->pc = 0x16980cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936956), GPR_U32(ctx, 2));
    // 0x169810: 0xaf938984  sw          $s3, -0x767C($gp)
    ctx->pc = 0x169810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936964), GPR_U32(ctx, 19));
    // 0x169814: 0xaf948988  sw          $s4, -0x7678($gp)
    ctx->pc = 0x169814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 20));
    // 0x169818: 0xaf92898c  sw          $s2, -0x7674($gp)
    ctx->pc = 0x169818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 18));
    // 0x16981c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x16981Cu;
    SET_GPR_U32(ctx, 31, 0x169824u);
    ctx->pc = 0x169820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16981Cu;
            // 0x169820: 0xaf808980  sw          $zero, -0x7680($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169824u; }
        if (ctx->pc != 0x169824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169824u; }
        if (ctx->pc != 0x169824u) { return; }
    }
    ctx->pc = 0x169824u;
label_169824:
    // 0x169824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169828: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x169828u;
    SET_GPR_U32(ctx, 31, 0x169830u);
    ctx->pc = 0x16982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169828u;
            // 0x16982c: 0x27a41060  addiu       $a0, $sp, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169830u; }
        if (ctx->pc != 0x169830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169830u; }
        if (ctx->pc != 0x169830u) { return; }
    }
    ctx->pc = 0x169830u;
label_169830:
    // 0x169830: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x169834: 0x27a41060  addiu       $a0, $sp, 0x1060
    ctx->pc = 0x169834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4192));
    // 0x169838: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x169838u;
    SET_GPR_U32(ctx, 31, 0x169840u);
    ctx->pc = 0x16983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169838u;
            // 0x16983c: 0x24a54b70  addiu       $a1, $a1, 0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169840u; }
        if (ctx->pc != 0x169840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169840u; }
        if (ctx->pc != 0x169840u) { return; }
    }
    ctx->pc = 0x169840u;
label_169840:
    // 0x169840: 0x8fa61f3c  lw          $a2, 0x1F3C($sp)
    ctx->pc = 0x169840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 7996)));
    // 0x169844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169848: 0xc051a60  jal         func_146980
    ctx->pc = 0x169848u;
    SET_GPR_U32(ctx, 31, 0x169850u);
    ctx->pc = 0x16984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169848u;
            // 0x16984c: 0x27a41060  addiu       $a0, $sp, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169850u; }
        if (ctx->pc != 0x169850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169850u; }
        if (ctx->pc != 0x169850u) { return; }
    }
    ctx->pc = 0x169850u;
label_169850:
    // 0x169850: 0xc0519c8  jal         func_146720
    ctx->pc = 0x169850u;
    SET_GPR_U32(ctx, 31, 0x169858u);
    ctx->pc = 0x169854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169850u;
            // 0x169854: 0x27a41060  addiu       $a0, $sp, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169858u; }
        if (ctx->pc != 0x169858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169858u; }
        if (ctx->pc != 0x169858u) { return; }
    }
    ctx->pc = 0x169858u;
label_169858:
    // 0x169858: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x169858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16985c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16985cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16986c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16986cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169870: 0x3e00008  jr          $ra
    ctx->pc = 0x169870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169870u;
            // 0x169874: 0x27bd1f40  addiu       $sp, $sp, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169878u;
}
