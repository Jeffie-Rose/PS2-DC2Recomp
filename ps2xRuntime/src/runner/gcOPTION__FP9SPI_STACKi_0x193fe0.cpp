#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcOPTION__FP9SPI_STACKi
// Address: 0x193fe0 - 0x1940d0
void gcOPTION__FP9SPI_STACKi_0x193fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcOPTION__FP9SPI_STACKi_0x193fe0");
#endif

    switch (ctx->pc) {
        case 0x193ffcu: goto label_193ffc;
        case 0x194018u: goto label_194018;
        case 0x194034u: goto label_194034;
        case 0x194044u: goto label_194044;
        case 0x194058u: goto label_194058;
        case 0x194068u: goto label_194068;
        case 0x19407cu: goto label_19407c;
        case 0x19408cu: goto label_19408c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940b0u: goto label_1940b0;
        default: break;
    }

    ctx->pc = 0x193fe0u;

    // 0x193fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193fe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x193fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193ff0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x193ff4: 0xc05191c  jal         func_146470
    ctx->pc = 0x193FF4u;
    SET_GPR_U32(ctx, 31, 0x193FFCu);
    ctx->pc = 0x193FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FF4u;
            // 0x193ff8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FFCu; }
        if (ctx->pc != 0x193FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FFCu; }
        if (ctx->pc != 0x193FFCu) { return; }
    }
    ctx->pc = 0x193FFCu;
label_193ffc:
    // 0x193ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194000: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194000u;
    {
        const bool branch_taken_0x194000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194000u;
            // 0x194004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194000) {
            ctx->pc = 0x194010u;
            goto label_194010;
        }
    }
    ctx->pc = 0x194008u;
    // 0x194008: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x194008u;
    {
        const bool branch_taken_0x194008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194008u;
            // 0x19400c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194008) {
            ctx->pc = 0x1940BCu;
            goto label_1940bc;
        }
    }
    ctx->pc = 0x194010u;
label_194010:
    // 0x194010: 0xc064220  jal         func_190880
    ctx->pc = 0x194010u;
    SET_GPR_U32(ctx, 31, 0x194018u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194018u; }
        if (ctx->pc != 0x194018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194018u; }
        if (ctx->pc != 0x194018u) { return; }
    }
    ctx->pc = 0x194018u;
label_194018:
    // 0x194018: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x194018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x19401c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x19401cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x194020: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x194020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x194024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194028: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19402c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x19402Cu;
    SET_GPR_U32(ctx, 31, 0x194034u);
    ctx->pc = 0x194030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19402Cu;
            // 0x194030: 0x24a55240  addiu       $a1, $a1, 0x5240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194034u; }
        if (ctx->pc != 0x194034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194034u; }
        if (ctx->pc != 0x194034u) { return; }
    }
    ctx->pc = 0x194034u;
label_194034:
    // 0x194034: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194034u;
    {
        const bool branch_taken_0x194034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194034u;
            // 0x194038: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194034) {
            ctx->pc = 0x19404Cu;
            goto label_19404c;
        }
    }
    ctx->pc = 0x19403Cu;
    // 0x19403c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19403Cu;
    SET_GPR_U32(ctx, 31, 0x194044u);
    ctx->pc = 0x194040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19403Cu;
            // 0x194040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194044u; }
        if (ctx->pc != 0x194044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194044u; }
        if (ctx->pc != 0x194044u) { return; }
    }
    ctx->pc = 0x194044u;
label_194044:
    // 0x194044: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x194044u;
    {
        const bool branch_taken_0x194044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194044u;
            // 0x194048: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194044) {
            ctx->pc = 0x1940B4u;
            goto label_1940b4;
        }
    }
    ctx->pc = 0x19404Cu;
label_19404c:
    // 0x19404c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194050: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x194050u;
    SET_GPR_U32(ctx, 31, 0x194058u);
    ctx->pc = 0x194054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194050u;
            // 0x194054: 0x24a55250  addiu       $a1, $a1, 0x5250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194058u; }
        if (ctx->pc != 0x194058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194058u; }
        if (ctx->pc != 0x194058u) { return; }
    }
    ctx->pc = 0x194058u;
label_194058:
    // 0x194058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194058u;
    {
        const bool branch_taken_0x194058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194058u;
            // 0x19405c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194058) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x194060u;
    // 0x194060: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194060u;
    SET_GPR_U32(ctx, 31, 0x194068u);
    ctx->pc = 0x194064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194060u;
            // 0x194064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194068u; }
        if (ctx->pc != 0x194068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194068u; }
        if (ctx->pc != 0x194068u) { return; }
    }
    ctx->pc = 0x194068u;
label_194068:
    // 0x194068: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x194068u;
    {
        const bool branch_taken_0x194068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194068u;
            // 0x19406c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194068) {
            ctx->pc = 0x1940B4u;
            goto label_1940b4;
        }
    }
    ctx->pc = 0x194070u;
label_194070:
    // 0x194070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194074: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x194074u;
    SET_GPR_U32(ctx, 31, 0x19407Cu);
    ctx->pc = 0x194078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194074u;
            // 0x194078: 0x24a55258  addiu       $a1, $a1, 0x5258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19407Cu; }
        if (ctx->pc != 0x19407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19407Cu; }
        if (ctx->pc != 0x19407Cu) { return; }
    }
    ctx->pc = 0x19407Cu;
label_19407c:
    // 0x19407c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19407Cu;
    {
        const bool branch_taken_0x19407c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19407Cu;
            // 0x194080: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19407c) {
            ctx->pc = 0x194094u;
            goto label_194094;
        }
    }
    ctx->pc = 0x194084u;
    // 0x194084: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194084u;
    SET_GPR_U32(ctx, 31, 0x19408Cu);
    ctx->pc = 0x194088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194084u;
            // 0x194088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19408Cu; }
        if (ctx->pc != 0x19408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19408Cu; }
        if (ctx->pc != 0x19408Cu) { return; }
    }
    ctx->pc = 0x19408Cu;
label_19408c:
    // 0x19408c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19408Cu;
    {
        const bool branch_taken_0x19408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19408Cu;
            // 0x194090: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19408c) {
            ctx->pc = 0x1940B4u;
            goto label_1940b4;
        }
    }
    ctx->pc = 0x194094u;
label_194094:
    // 0x194094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194098: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x194098u;
    SET_GPR_U32(ctx, 31, 0x1940A0u);
    ctx->pc = 0x19409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194098u;
            // 0x19409c: 0x24a55260  addiu       $a1, $a1, 0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940A0u; }
        if (ctx->pc != 0x1940A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940A0u; }
        if (ctx->pc != 0x1940A0u) { return; }
    }
    ctx->pc = 0x1940A0u;
label_1940a0:
    // 0x1940a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1940A0u;
    {
        const bool branch_taken_0x1940a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1940A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940A0u;
            // 0x1940a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940a0) {
            ctx->pc = 0x1940B8u;
            goto label_1940b8;
        }
    }
    ctx->pc = 0x1940A8u;
    // 0x1940a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1940A8u;
    SET_GPR_U32(ctx, 31, 0x1940B0u);
    ctx->pc = 0x1940ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1940A8u;
            // 0x1940ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940B0u; }
        if (ctx->pc != 0x1940B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940B0u; }
        if (ctx->pc != 0x1940B0u) { return; }
    }
    ctx->pc = 0x1940B0u;
label_1940b0:
    // 0x1940b0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1940b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1940b4:
    // 0x1940b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1940b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1940b8:
    // 0x1940b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1940b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1940bc:
    // 0x1940bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1940bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1940c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1940c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1940c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1940c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1940c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1940C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940C8u;
            // 0x1940cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940D0u;
}
