#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8CAquaMesFv
// Address: 0x211a90 - 0x211be4
void Draw__8CAquaMesFv_0x211a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8CAquaMesFv_0x211a90");
#endif

    switch (ctx->pc) {
        case 0x211ab8u: goto label_211ab8;
        case 0x211ad8u: goto label_211ad8;
        case 0x211af8u: goto label_211af8;
        case 0x211b18u: goto label_211b18;
        case 0x211b38u: goto label_211b38;
        case 0x211b58u: goto label_211b58;
        case 0x211b78u: goto label_211b78;
        case 0x211b9cu: goto label_211b9c;
        case 0x211bc0u: goto label_211bc0;
        case 0x211bd4u: goto label_211bd4;
        default: break;
    }

    ctx->pc = 0x211a90u;

    // 0x211a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211a94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x211a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x211a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211aa4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x211aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x211aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211aac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x211aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x211ab0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x211AB0u;
    SET_GPR_U32(ctx, 31, 0x211AB8u);
    ctx->pc = 0x211AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AB0u;
            // 0x211ab4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AB8u; }
        if (ctx->pc != 0x211AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AB8u; }
        if (ctx->pc != 0x211AB8u) { return; }
    }
    ctx->pc = 0x211AB8u;
label_211ab8:
    // 0x211ab8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x211abc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211ABCu;
    {
        const bool branch_taken_0x211abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211abc) {
            ctx->pc = 0x211AD8u;
            goto label_211ad8;
        }
    }
    ctx->pc = 0x211AC4u;
    // 0x211ac4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x211ac4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x211ac8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211AC8u;
    {
        const bool branch_taken_0x211ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ac8) {
            ctx->pc = 0x211AD8u;
            goto label_211ad8;
        }
    }
    ctx->pc = 0x211AD0u;
    // 0x211ad0: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211AD0u;
    SET_GPR_U32(ctx, 31, 0x211AD8u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AD8u; }
        if (ctx->pc != 0x211AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AD8u; }
        if (ctx->pc != 0x211AD8u) { return; }
    }
    ctx->pc = 0x211AD8u;
label_211ad8:
    // 0x211ad8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x211adc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211ADCu;
    {
        const bool branch_taken_0x211adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211adc) {
            ctx->pc = 0x211AF8u;
            goto label_211af8;
        }
    }
    ctx->pc = 0x211AE4u;
    // 0x211ae4: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x211ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x211ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211AE8u;
    {
        const bool branch_taken_0x211ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ae8) {
            ctx->pc = 0x211AF8u;
            goto label_211af8;
        }
    }
    ctx->pc = 0x211AF0u;
    // 0x211af0: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211AF0u;
    SET_GPR_U32(ctx, 31, 0x211AF8u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AF8u; }
        if (ctx->pc != 0x211AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AF8u; }
        if (ctx->pc != 0x211AF8u) { return; }
    }
    ctx->pc = 0x211AF8u;
label_211af8:
    // 0x211af8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x211afc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211AFCu;
    {
        const bool branch_taken_0x211afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211afc) {
            ctx->pc = 0x211B18u;
            goto label_211b18;
        }
    }
    ctx->pc = 0x211B04u;
    // 0x211b04: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x211b04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x211b08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211B08u;
    {
        const bool branch_taken_0x211b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b08) {
            ctx->pc = 0x211B18u;
            goto label_211b18;
        }
    }
    ctx->pc = 0x211B10u;
    // 0x211b10: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211B10u;
    SET_GPR_U32(ctx, 31, 0x211B18u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B18u; }
        if (ctx->pc != 0x211B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B18u; }
        if (ctx->pc != 0x211B18u) { return; }
    }
    ctx->pc = 0x211B18u;
label_211b18:
    // 0x211b18: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x211b1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B1Cu;
    {
        const bool branch_taken_0x211b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b1c) {
            ctx->pc = 0x211B38u;
            goto label_211b38;
        }
    }
    ctx->pc = 0x211B24u;
    // 0x211b24: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x211b24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x211b28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211B28u;
    {
        const bool branch_taken_0x211b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b28) {
            ctx->pc = 0x211B38u;
            goto label_211b38;
        }
    }
    ctx->pc = 0x211B30u;
    // 0x211b30: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211B30u;
    SET_GPR_U32(ctx, 31, 0x211B38u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B38u; }
        if (ctx->pc != 0x211B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B38u; }
        if (ctx->pc != 0x211B38u) { return; }
    }
    ctx->pc = 0x211B38u;
label_211b38:
    // 0x211b38: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x211b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x211b3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B3Cu;
    {
        const bool branch_taken_0x211b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b3c) {
            ctx->pc = 0x211B58u;
            goto label_211b58;
        }
    }
    ctx->pc = 0x211B44u;
    // 0x211b44: 0x92030048  lbu         $v1, 0x48($s0)
    ctx->pc = 0x211b44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x211b48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211B48u;
    {
        const bool branch_taken_0x211b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b48) {
            ctx->pc = 0x211B58u;
            goto label_211b58;
        }
    }
    ctx->pc = 0x211B50u;
    // 0x211b50: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211B50u;
    SET_GPR_U32(ctx, 31, 0x211B58u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B58u; }
        if (ctx->pc != 0x211B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B58u; }
        if (ctx->pc != 0x211B58u) { return; }
    }
    ctx->pc = 0x211B58u;
label_211b58:
    // 0x211b58: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x211b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x211b5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211B5Cu;
    {
        const bool branch_taken_0x211b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b5c) {
            ctx->pc = 0x211B78u;
            goto label_211b78;
        }
    }
    ctx->pc = 0x211B64u;
    // 0x211b64: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x211b64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x211b68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211B68u;
    {
        const bool branch_taken_0x211b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b68) {
            ctx->pc = 0x211B78u;
            goto label_211b78;
        }
    }
    ctx->pc = 0x211B70u;
    // 0x211b70: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211B70u;
    SET_GPR_U32(ctx, 31, 0x211B78u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B78u; }
        if (ctx->pc != 0x211B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B78u; }
        if (ctx->pc != 0x211B78u) { return; }
    }
    ctx->pc = 0x211B78u;
label_211b78:
    // 0x211b78: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x211b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x211b7c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211B7Cu;
    {
        const bool branch_taken_0x211b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b7c) {
            ctx->pc = 0x211B9Cu;
            goto label_211b9c;
        }
    }
    ctx->pc = 0x211B84u;
    // 0x211b84: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x211b88: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x211b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x211b8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x211B8Cu;
    {
        const bool branch_taken_0x211b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x211b8c) {
            ctx->pc = 0x211B9Cu;
            goto label_211b9c;
        }
    }
    ctx->pc = 0x211B94u;
    // 0x211b94: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x211B94u;
    SET_GPR_U32(ctx, 31, 0x211B9Cu);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B9Cu; }
        if (ctx->pc != 0x211B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211B9Cu; }
        if (ctx->pc != 0x211B9Cu) { return; }
    }
    ctx->pc = 0x211B9Cu;
label_211b9c:
    // 0x211b9c: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x211b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x211ba0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x211BA0u;
    {
        const bool branch_taken_0x211ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x211ba0) {
            ctx->pc = 0x211BD4u;
            goto label_211bd4;
        }
    }
    ctx->pc = 0x211BA8u;
    // 0x211ba8: 0x8f82950c  lw          $v0, -0x6AF4($gp)
    ctx->pc = 0x211ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939916)));
    // 0x211bac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x211bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x211bb0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x211bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x211bb4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x211bb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211bb8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x211BB8u;
    SET_GPR_U32(ctx, 31, 0x211BC0u);
    ctx->pc = 0x211BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211BB8u;
            // 0x211bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BC0u; }
        if (ctx->pc != 0x211BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BC0u; }
        if (ctx->pc != 0x211BC0u) { return; }
    }
    ctx->pc = 0x211BC0u;
label_211bc0:
    // 0x211bc0: 0x8f84950c  lw          $a0, -0x6AF4($gp)
    ctx->pc = 0x211bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939916)));
    // 0x211bc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211bc8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x211bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x211bcc: 0xc088f50  jal         func_223D40
    ctx->pc = 0x211BCCu;
    SET_GPR_U32(ctx, 31, 0x211BD4u);
    ctx->pc = 0x211BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211BCCu;
            // 0x211bd0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D40u;
    if (runtime->hasFunction(0x223D40u)) {
        auto targetFn = runtime->lookupFunction(0x223D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffi_0x223d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211BD4u; }
        if (ctx->pc != 0x211BD4u) { return; }
    }
    ctx->pc = 0x211BD4u;
label_211bd4:
    // 0x211bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x211BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211BDCu;
            // 0x211be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211BE4u;
}
