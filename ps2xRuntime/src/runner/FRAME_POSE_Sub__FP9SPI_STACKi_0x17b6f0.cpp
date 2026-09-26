#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FRAME_POSE_Sub__FP9SPI_STACKi
// Address: 0x17b6f0 - 0x17b8a8
void FRAME_POSE_Sub__FP9SPI_STACKi_0x17b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FRAME_POSE_Sub__FP9SPI_STACKi_0x17b6f0");
#endif

    switch (ctx->pc) {
        case 0x17b714u: goto label_17b714;
        case 0x17b720u: goto label_17b720;
        case 0x17b730u: goto label_17b730;
        case 0x17b758u: goto label_17b758;
        case 0x17b790u: goto label_17b790;
        case 0x17b7c8u: goto label_17b7c8;
        case 0x17b808u: goto label_17b808;
        case 0x17b818u: goto label_17b818;
        case 0x17b820u: goto label_17b820;
        case 0x17b840u: goto label_17b840;
        case 0x17b864u: goto label_17b864;
        default: break;
    }

    ctx->pc = 0x17b6f0u;

    // 0x17b6f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b6f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b6f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17b6fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17b700: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x17b700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17b704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b708: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17b708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b70c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B70Cu;
    SET_GPR_U32(ctx, 31, 0x17B714u);
    ctx->pc = 0x17B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B70Cu;
            // 0x17b710: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B714u; }
        if (ctx->pc != 0x17B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B714u; }
        if (ctx->pc != 0x17B714u) { return; }
    }
    ctx->pc = 0x17B714u;
label_17b714:
    // 0x17b714: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b718: 0xc05ea4c  jal         func_17A930
    ctx->pc = 0x17B718u;
    SET_GPR_U32(ctx, 31, 0x17B720u);
    ctx->pc = 0x17B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B718u;
            // 0x17b71c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A930u;
    if (runtime->hasFunction(0x17A930u)) {
        auto targetFn = runtime->lookupFunction(0x17A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B720u; }
        if (ctx->pc != 0x17B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetFramePose__13CDynamicAnimeFi_0x17a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B720u; }
        if (ctx->pc != 0x17B720u) { return; }
    }
    ctx->pc = 0x17B720u;
label_17b720:
    // 0x17b720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b728: 0xc05191c  jal         func_146470
    ctx->pc = 0x17B728u;
    SET_GPR_U32(ctx, 31, 0x17B730u);
    ctx->pc = 0x17B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B728u;
            // 0x17b72c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B730u; }
        if (ctx->pc != 0x17B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B730u; }
        if (ctx->pc != 0x17B730u) { return; }
    }
    ctx->pc = 0x17B730u;
label_17b730:
    // 0x17b730: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B730u;
    {
        const bool branch_taken_0x17b730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B730u;
            // 0x17b734: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b730) {
            ctx->pc = 0x17B740u;
            goto label_17b740;
        }
    }
    ctx->pc = 0x17B738u;
    // 0x17b738: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B738u;
    {
        const bool branch_taken_0x17b738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B738u;
            // 0x17b73c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b738) {
            ctx->pc = 0x17B748u;
            goto label_17b748;
        }
    }
    ctx->pc = 0x17B740u;
label_17b740:
    // 0x17b740: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x17B740u;
    {
        const bool branch_taken_0x17b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B740u;
            // 0x17b744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b740) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B748u;
label_17b748:
    // 0x17b748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b74c: 0x24a53b68  addiu       $a1, $a1, 0x3B68
    ctx->pc = 0x17b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15208));
    // 0x17b750: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x17B750u;
    SET_GPR_U32(ctx, 31, 0x17B758u);
    ctx->pc = 0x17B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B750u;
            // 0x17b754: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B758u; }
        if (ctx->pc != 0x17B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B758u; }
        if (ctx->pc != 0x17B758u) { return; }
    }
    ctx->pc = 0x17B758u;
label_17b758:
    // 0x17b758: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17B758u;
    {
        const bool branch_taken_0x17b758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B758u;
            // 0x17b75c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b758) {
            ctx->pc = 0x17B784u;
            goto label_17b784;
        }
    }
    ctx->pc = 0x17B760u;
    // 0x17b760: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x17b760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17b764: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B764u;
    {
        const bool branch_taken_0x17b764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B764u;
            // 0x17b768: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b764) {
            ctx->pc = 0x17B774u;
            goto label_17b774;
        }
    }
    ctx->pc = 0x17B76Cu;
    // 0x17b76c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x17B76Cu;
    {
        const bool branch_taken_0x17b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B76Cu;
            // 0x17b770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b76c) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B774u;
label_17b774:
    // 0x17b774: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b778: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17b778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17b77c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17B77Cu;
    {
        const bool branch_taken_0x17b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B77Cu;
            // 0x17b780: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b77c) {
            ctx->pc = 0x17B7FCu;
            goto label_17b7fc;
        }
    }
    ctx->pc = 0x17B784u;
label_17b784:
    // 0x17b784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b788: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x17B788u;
    SET_GPR_U32(ctx, 31, 0x17B790u);
    ctx->pc = 0x17B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B788u;
            // 0x17b78c: 0x24a53b70  addiu       $a1, $a1, 0x3B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B790u; }
        if (ctx->pc != 0x17B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B790u; }
        if (ctx->pc != 0x17B790u) { return; }
    }
    ctx->pc = 0x17B790u;
label_17b790:
    // 0x17b790: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17B790u;
    {
        const bool branch_taken_0x17b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B790u;
            // 0x17b794: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b790) {
            ctx->pc = 0x17B7BCu;
            goto label_17b7bc;
        }
    }
    ctx->pc = 0x17B798u;
    // 0x17b798: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x17b798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17b79c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B79Cu;
    {
        const bool branch_taken_0x17b79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B79Cu;
            // 0x17b7a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b79c) {
            ctx->pc = 0x17B7ACu;
            goto label_17b7ac;
        }
    }
    ctx->pc = 0x17B7A4u;
    // 0x17b7a4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17B7A4u;
    {
        const bool branch_taken_0x17b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7A4u;
            // 0x17b7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7a4) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B7ACu;
label_17b7ac:
    // 0x17b7ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b7b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17b7b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17B7B4u;
    {
        const bool branch_taken_0x17b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7B4u;
            // 0x17b7b8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7b4) {
            ctx->pc = 0x17B7FCu;
            goto label_17b7fc;
        }
    }
    ctx->pc = 0x17B7BCu;
label_17b7bc:
    // 0x17b7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7c0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x17B7C0u;
    SET_GPR_U32(ctx, 31, 0x17B7C8u);
    ctx->pc = 0x17B7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7C0u;
            // 0x17b7c4: 0x24a53b78  addiu       $a1, $a1, 0x3B78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7C8u; }
        if (ctx->pc != 0x17B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7C8u; }
        if (ctx->pc != 0x17B7C8u) { return; }
    }
    ctx->pc = 0x17B7C8u;
label_17b7c8:
    // 0x17b7c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17B7C8u;
    {
        const bool branch_taken_0x17b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7C8u;
            // 0x17b7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7c8) {
            ctx->pc = 0x17B7F4u;
            goto label_17b7f4;
        }
    }
    ctx->pc = 0x17B7D0u;
    // 0x17b7d0: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x17b7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17b7d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B7D4u;
    {
        const bool branch_taken_0x17b7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7D4u;
            // 0x17b7d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7d4) {
            ctx->pc = 0x17B7E4u;
            goto label_17b7e4;
        }
    }
    ctx->pc = 0x17B7DCu;
    // 0x17b7dc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x17B7DCu;
    {
        const bool branch_taken_0x17b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7DCu;
            // 0x17b7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7dc) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B7E4u;
label_17b7e4:
    // 0x17b7e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b7e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17b7ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B7ECu;
    {
        const bool branch_taken_0x17b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7ECu;
            // 0x17b7f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7ec) {
            ctx->pc = 0x17B7FCu;
            goto label_17b7fc;
        }
    }
    ctx->pc = 0x17B7F4u;
label_17b7f4:
    // 0x17b7f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17B7F4u;
    {
        const bool branch_taken_0x17b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7F4u;
            // 0x17b7f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7f4) {
            ctx->pc = 0x17B890u;
            goto label_17b890;
        }
    }
    ctx->pc = 0x17B7FCu;
label_17b7fc:
    // 0x17b7fc: 0x8f848a14  lw          $a0, -0x75EC($gp)
    ctx->pc = 0x17b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x17b800: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17B800u;
    SET_GPR_U32(ctx, 31, 0x17B808u);
    ctx->pc = 0x17B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B800u;
            // 0x17b804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B808u; }
        if (ctx->pc != 0x17B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B808u; }
        if (ctx->pc != 0x17B808u) { return; }
    }
    ctx->pc = 0x17B808u;
label_17b808:
    // 0x17b808: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17b808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x17b80c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17b80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b810: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17B810u;
    {
        const bool branch_taken_0x17b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B810u;
            // 0x17b814: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b810) {
            ctx->pc = 0x17B878u;
            goto label_17b878;
        }
    }
    ctx->pc = 0x17B818u;
label_17b818:
    // 0x17b818: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B818u;
    SET_GPR_U32(ctx, 31, 0x17B820u);
    ctx->pc = 0x17B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B818u;
            // 0x17b81c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B820u; }
        if (ctx->pc != 0x17B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B820u; }
        if (ctx->pc != 0x17B820u) { return; }
    }
    ctx->pc = 0x17B820u;
label_17b820:
    // 0x17b820: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b824: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x17b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x17b828: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17b828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17b82c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b830: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17b834: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17b834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b838: 0xc05ea5c  jal         func_17A970
    ctx->pc = 0x17B838u;
    SET_GPR_U32(ctx, 31, 0x17B840u);
    ctx->pc = 0x17B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B838u;
            // 0x17b83c: 0x8f848a10  lw          $a0, -0x75F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A970u;
    if (runtime->hasFunction(0x17A970u)) {
        auto targetFn = runtime->lookupFunction(0x17A970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B840u; }
        if (ctx->pc != 0x17B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVertexID__13CDynamicAnimeFi_0x17a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B840u; }
        if (ctx->pc != 0x17B840u) { return; }
    }
    ctx->pc = 0x17B840u;
label_17b840:
    // 0x17b840: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17B840u;
    {
        const bool branch_taken_0x17b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b840) {
            ctx->pc = 0x17B870u;
            goto label_17b870;
        }
    }
    ctx->pc = 0x17B848u;
    // 0x17b848: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17b84c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17b850: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17b850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17b854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b858: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17b858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b85c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x17B85Cu;
    SET_GPR_U32(ctx, 31, 0x17B864u);
    ctx->pc = 0x17B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B85Cu;
            // 0x17b860: 0x24843b80  addiu       $a0, $a0, 0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B864u; }
        if (ctx->pc != 0x17B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B864u; }
        if (ctx->pc != 0x17B864u) { return; }
    }
    ctx->pc = 0x17B864u;
label_17b864:
    // 0x17b864: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17b864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17b868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B868u;
    {
        const bool branch_taken_0x17b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B868u;
            // 0x17b86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b868) {
            ctx->pc = 0x17B88Cu;
            goto label_17b88c;
        }
    }
    ctx->pc = 0x17B870u;
label_17b870:
    // 0x17b870: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17b874: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17b874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17b878:
    // 0x17b878: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b87c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17b87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17b880: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17B880u;
    {
        const bool branch_taken_0x17b880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B880u;
            // 0x17b884: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b880) {
            ctx->pc = 0x17B818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b818;
        }
    }
    ctx->pc = 0x17B888u;
    // 0x17b888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b88c:
    // 0x17b88c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17b88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17b890:
    // 0x17b890: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17b890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B8A0u;
            // 0x17b8a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B8A8u;
}
