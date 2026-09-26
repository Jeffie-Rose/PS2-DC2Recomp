#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMapSelect__FP9mgCMemory
// Address: 0x2d28e0 - 0x2d2b64
void InitMapSelect__FP9mgCMemory_0x2d28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMapSelect__FP9mgCMemory_0x2d28e0");
#endif

    switch (ctx->pc) {
        case 0x2d28fcu: goto label_2d28fc;
        case 0x2d2910u: goto label_2d2910;
        case 0x2d2934u: goto label_2d2934;
        case 0x2d2950u: goto label_2d2950;
        case 0x2d295cu: goto label_2d295c;
        case 0x2d2974u: goto label_2d2974;
        case 0x2d2a10u: goto label_2d2a10;
        case 0x2d2a20u: goto label_2d2a20;
        case 0x2d2a38u: goto label_2d2a38;
        case 0x2d2a40u: goto label_2d2a40;
        case 0x2d2a54u: goto label_2d2a54;
        case 0x2d2a8cu: goto label_2d2a8c;
        case 0x2d2ad4u: goto label_2d2ad4;
        case 0x2d2adcu: goto label_2d2adc;
        case 0x2d2ae4u: goto label_2d2ae4;
        case 0x2d2af4u: goto label_2d2af4;
        case 0x2d2b44u: goto label_2d2b44;
        default: break;
    }

    ctx->pc = 0x2d28e0u;

    // 0x2d28e0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2d28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x2d28e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d28e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d28e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d28ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d28ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d28f0: 0xaf849ddc  sw          $a0, -0x6224($gp)
    ctx->pc = 0x2d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942172), GPR_U32(ctx, 4));
    // 0x2d28f4: 0xc0521d8  jal         func_148760
    ctx->pc = 0x2D28F4u;
    SET_GPR_U32(ctx, 31, 0x2D28FCu);
    ctx->pc = 0x2D28F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28F4u;
            // 0x2d28f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28FCu; }
        if (ctx->pc != 0x2D28FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28FCu; }
        if (ctx->pc != 0x2D28FCu) { return; }
    }
    ctx->pc = 0x2D28FCu;
label_2d28fc:
    // 0x2d28fc: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x2d28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x2d2900: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d2900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d2904: 0x24840528  addiu       $a0, $a0, 0x528
    ctx->pc = 0x2d2904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1320));
    // 0x2d2908: 0xc0524c8  jal         func_149320
    ctx->pc = 0x2D2908u;
    SET_GPR_U32(ctx, 31, 0x2D2910u);
    ctx->pc = 0x2D290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2908u;
            // 0x2d290c: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2910u; }
        if (ctx->pc != 0x2D2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2910u; }
        if (ctx->pc != 0x2D2910u) { return; }
    }
    ctx->pc = 0x2D2910u;
label_2d2910:
    // 0x2d2910: 0x27a402b4  addiu       $a0, $sp, 0x2B4
    ctx->pc = 0x2d2910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x2d2914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d2914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2918: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d2918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d291c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d291cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2920: 0x8f838ac0  lw          $v1, -0x7540($gp)
    ctx->pc = 0x2d2920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x2d2924: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x2d2924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2d2928: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x2d2928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
    // 0x2d292c: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x2d292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
    // 0x2d2930: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d2930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d2934:
    // 0x2d2934: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d2938: 0x24425860  addiu       $v0, $v0, 0x5860
    ctx->pc = 0x2d2938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22624));
    // 0x2d293c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d2940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d2940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d2944: 0x8f849ddc  lw          $a0, -0x6224($gp)
    ctx->pc = 0x2d2944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942172)));
    // 0x2d2948: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2D2948u;
    SET_GPR_U32(ctx, 31, 0x2D2950u);
    ctx->pc = 0x2D294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2948u;
            // 0x2d294c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2950u; }
        if (ctx->pc != 0x2D2950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2950u; }
        if (ctx->pc != 0x2D2950u) { return; }
    }
    ctx->pc = 0x2D2950u;
label_2d2950:
    // 0x2d2950: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2d2950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2d2954: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2D2954u;
    SET_GPR_U32(ctx, 31, 0x2D295Cu);
    ctx->pc = 0x2D2958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2954u;
            // 0x2d2958: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D295Cu; }
        if (ctx->pc != 0x2D295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D295Cu; }
        if (ctx->pc != 0x2D295Cu) { return; }
    }
    ctx->pc = 0x2D295Cu;
label_2d295c:
    // 0x2d295c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2d2960: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d2960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2964: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x2d2968: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x2d2968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d296c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2970: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2d2974:
    // 0x2d2974: 0x0  nop
    ctx->pc = 0x2d2974u;
    // NOP
    // 0x2d2978: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d2978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d297c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2d297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d2980: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x2d2980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d2984: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2988: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d2988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2d298c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d298cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2990: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d2990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d2994: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2d2994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2d2998: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d2998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d299c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29a0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2d29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2d29a4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29a8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d29a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29ac: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2d29acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2d29b0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29b4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29b8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2d29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2d29bc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29c0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29c4: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2d29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2d29c8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29cc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d29ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29d0: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x2d29d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x2d29d4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2d29d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d29d8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d29d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d29dc: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x2d29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x2d29e0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D29E0u;
    {
        const bool branch_taken_0x2d29e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D29E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29E0u;
            // 0x2d29e4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29e0) {
            ctx->pc = 0x2D2974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2974;
        }
    }
    ctx->pc = 0x2D29E8u;
    // 0x2d29e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d29e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d29ec: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2d29ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d29f0: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D29F0u;
    {
        const bool branch_taken_0x2d29f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D29F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29F0u;
            // 0x2d29f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29f0) {
            ctx->pc = 0x2D2934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2934;
        }
    }
    ctx->pc = 0x2D29F8u;
    // 0x2d29f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2d29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2d29fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2a00: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2d2a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d2a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a08: 0xc0518a4  jal         func_146290
    ctx->pc = 0x2D2A08u;
    SET_GPR_U32(ctx, 31, 0x2D2A10u);
    ctx->pc = 0x2D2A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A08u;
            // 0x2d2a0c: 0xaf809de0  sw          $zero, -0x6220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146290u;
    if (runtime->hasFunction(0x146290u)) {
        auto targetFn = runtime->lookupFunction(0x146290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A10u; }
        if (ctx->pc != 0x2D2A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__9input_strFPciPc_0x146290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A10u; }
        if (ctx->pc != 0x2D2A10u) { return; }
    }
    ctx->pc = 0x2D2A10u;
label_2d2a10:
    // 0x2d2a10: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D2A10u;
    {
        const bool branch_taken_0x2d2a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A10u;
            // 0x2d2a14: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a10) {
            ctx->pc = 0x2D2B50u;
            goto label_2d2b50;
        }
    }
    ctx->pc = 0x2D2A18u;
    // 0x2d2a18: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D2A18u;
    SET_GPR_U32(ctx, 31, 0x2D2A20u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A20u; }
        if (ctx->pc != 0x2D2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A20u; }
        if (ctx->pc != 0x2D2A20u) { return; }
    }
    ctx->pc = 0x2D2A20u;
label_2d2a20:
    // 0x2d2a20: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2d2a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2a24: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2d2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2d2a28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d2a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2a2c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2d2a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2a30: 0xc0518a4  jal         func_146290
    ctx->pc = 0x2D2A30u;
    SET_GPR_U32(ctx, 31, 0x2D2A38u);
    ctx->pc = 0x2D2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A30u;
            // 0x2d2a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146290u;
    if (runtime->hasFunction(0x146290u)) {
        auto targetFn = runtime->lookupFunction(0x146290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A38u; }
        if (ctx->pc != 0x2D2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__9input_strFPciPc_0x146290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A38u; }
        if (ctx->pc != 0x2D2A38u) { return; }
    }
    ctx->pc = 0x2D2A38u;
label_2d2a38:
    // 0x2d2a38: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D2A38u;
    {
        const bool branch_taken_0x2d2a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a38) {
            ctx->pc = 0x2D2B4Cu;
            goto label_2d2b4c;
        }
    }
    ctx->pc = 0x2D2A40u;
label_2d2a40:
    // 0x2d2a40: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x2d2a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2a44: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D2A44u;
    {
        const bool branch_taken_0x2d2a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A44u;
            // 0x2d2a48: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a44) {
            ctx->pc = 0x2D2B2Cu;
            goto label_2d2b2c;
        }
    }
    ctx->pc = 0x2D2A4Cu;
    // 0x2d2a4c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2A4Cu;
    {
        const bool branch_taken_0x2d2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a4c) {
            ctx->pc = 0x2D2AA4u;
            goto label_2d2aa4;
        }
    }
    ctx->pc = 0x2D2A54u;
label_2d2a54:
    // 0x2d2a54: 0x0  nop
    ctx->pc = 0x2d2a54u;
    // NOP
    // 0x2d2a58: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2d2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2d2a5c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2d2a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2d2a60: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D2A60u;
    {
        const bool branch_taken_0x2d2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A60u;
            // 0x2d2a64: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a60) {
            ctx->pc = 0x2D2AB4u;
            goto label_2d2ab4;
        }
    }
    ctx->pc = 0x2D2A68u;
    // 0x2d2a68: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2A68u;
    {
        const bool branch_taken_0x2d2a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A68u;
            // 0x2d2a6c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a68) {
            ctx->pc = 0x2D2A74u;
            goto label_2d2a74;
        }
    }
    ctx->pc = 0x2D2A70u;
    // 0x2d2a70: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2d2a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d2a74:
    // 0x2d2a74: 0x0  nop
    ctx->pc = 0x2d2a74u;
    // NOP
    // 0x2d2a78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a80: 0x24a50538  addiu       $a1, $a1, 0x538
    ctx->pc = 0x2d2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1336));
    // 0x2d2a84: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x2D2A84u;
    SET_GPR_U32(ctx, 31, 0x2D2A8Cu);
    ctx->pc = 0x2D2A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A84u;
            // 0x2d2a88: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A8Cu; }
        if (ctx->pc != 0x2D2A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A8Cu; }
        if (ctx->pc != 0x2D2A8Cu) { return; }
    }
    ctx->pc = 0x2D2A8Cu;
label_2d2a8c:
    // 0x2d2a8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2A8Cu;
    {
        const bool branch_taken_0x2d2a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a8c) {
            ctx->pc = 0x2D2A9Cu;
            goto label_2d2a9c;
        }
    }
    ctx->pc = 0x2D2A94u;
    // 0x2d2a94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2A94u;
    {
        const bool branch_taken_0x2d2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A94u;
            // 0x2d2a98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a94) {
            ctx->pc = 0x2D2AB4u;
            goto label_2d2ab4;
        }
    }
    ctx->pc = 0x2D2A9Cu;
label_2d2a9c:
    // 0x2d2a9c: 0x0  nop
    ctx->pc = 0x2d2a9cu;
    // NOP
    // 0x2d2aa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d2aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d2aa4:
    // 0x2d2aa4: 0x0  nop
    ctx->pc = 0x2d2aa4u;
    // NOP
    // 0x2d2aa8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2d2aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2aac: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D2AACu;
    {
        const bool branch_taken_0x2d2aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2aac) {
            ctx->pc = 0x2D2A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2a54;
        }
    }
    ctx->pc = 0x2D2AB4u;
label_2d2ab4:
    // 0x2d2ab4: 0x0  nop
    ctx->pc = 0x2d2ab4u;
    // NOP
    // 0x2d2ab8: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D2AB8u;
    {
        const bool branch_taken_0x2d2ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AB8u;
            // 0x2d2abc: 0x21d1021  addu        $v0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ab8) {
            ctx->pc = 0x2D2B2Cu;
            goto label_2d2b2c;
        }
    }
    ctx->pc = 0x2D2AC0u;
    // 0x2d2ac0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2d2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d2ac4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d2ac8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d2acc: 0xc052844  jal         func_14A110
    ctx->pc = 0x2D2ACCu;
    SET_GPR_U32(ctx, 31, 0x2D2AD4u);
    ctx->pc = 0x2D2AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2ACCu;
            // 0x2d2ad0: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A110u;
    if (runtime->hasFunction(0x14A110u)) {
        auto targetFn = runtime->lookupFunction(0x14A110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AD4u; }
        if (ctx->pc != 0x2D2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathNameExt__FPcPcPcPc_0x14a110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AD4u; }
        if (ctx->pc != 0x2D2AD4u) { return; }
    }
    ctx->pc = 0x2D2AD4u;
label_2d2ad4:
    // 0x2d2ad4: 0xc0b49fc  jal         func_2D27F0
    ctx->pc = 0x2D2AD4u;
    SET_GPR_U32(ctx, 31, 0x2D2ADCu);
    ctx->pc = 0x2D2AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AD4u;
            // 0x2d2ad8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ADCu; }
        if (ctx->pc != 0x2D2ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ADCu; }
        if (ctx->pc != 0x2D2ADCu) { return; }
    }
    ctx->pc = 0x2D2ADCu;
label_2d2adc:
    // 0x2d2adc: 0xc0b49d0  jal         func_2D2740
    ctx->pc = 0x2D2ADCu;
    SET_GPR_U32(ctx, 31, 0x2D2AE4u);
    ctx->pc = 0x2D2AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2ADCu;
            // 0x2d2ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2740u;
    if (runtime->hasFunction(0x2D2740u)) {
        auto targetFn = runtime->lookupFunction(0x2D2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AE4u; }
        if (ctx->pc != 0x2D2AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSelType__Fi_0x2d2740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AE4u; }
        if (ctx->pc != 0x2D2AE4u) { return; }
    }
    ctx->pc = 0x2D2AE4u;
label_2d2ae4:
    // 0x2d2ae4: 0x8f859ddc  lw          $a1, -0x6224($gp)
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942172)));
    // 0x2d2ae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2aec: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2D2AECu;
    SET_GPR_U32(ctx, 31, 0x2D2AF4u);
    ctx->pc = 0x2D2AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AECu;
            // 0x2d2af0: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AF4u; }
        if (ctx->pc != 0x2D2AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AF4u; }
        if (ctx->pc != 0x2D2AF4u) { return; }
    }
    ctx->pc = 0x2D2AF4u;
label_2d2af4:
    // 0x2d2af4: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d2af8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2d2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d2afc: 0x24635840  addiu       $v1, $v1, 0x5840
    ctx->pc = 0x2d2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22592));
    // 0x2d2b00: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2d2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2b04: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d2b08: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x2d2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x2d2b0c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2d2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2b10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2b14: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d2b18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d2b1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2b20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d2b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2b28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d2b2c:
    // 0x2d2b2c: 0x0  nop
    ctx->pc = 0x2d2b2cu;
    // NOP
    // 0x2d2b30: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x2d2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2d2b34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d2b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2b38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2d2b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2b3c: 0xc0518a4  jal         func_146290
    ctx->pc = 0x2D2B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B44u);
    ctx->pc = 0x2D2B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B3Cu;
            // 0x2d2b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146290u;
    if (runtime->hasFunction(0x146290u)) {
        auto targetFn = runtime->lookupFunction(0x146290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B44u; }
        if (ctx->pc != 0x2D2B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLine__9input_strFPciPc_0x146290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B44u; }
        if (ctx->pc != 0x2D2B44u) { return; }
    }
    ctx->pc = 0x2D2B44u;
label_2d2b44:
    // 0x2d2b44: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2D2B44u;
    {
        const bool branch_taken_0x2d2b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b44) {
            ctx->pc = 0x2D2A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2a40;
        }
    }
    ctx->pc = 0x2D2B4Cu;
label_2d2b4c:
    // 0x2d2b4c: 0x0  nop
    ctx->pc = 0x2d2b4cu;
    // NOP
label_2d2b50:
    // 0x2d2b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B5Cu;
            // 0x2d2b60: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2B64u;
}
