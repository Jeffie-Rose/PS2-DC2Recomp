#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__6ClsMesFv
// Address: 0x152a90 - 0x152e9c
void ps2___ct__6ClsMesFv_0x152a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__6ClsMesFv_0x152a90");
#endif

    switch (ctx->pc) {
        case 0x152aacu: goto label_152aac;
        case 0x152ab4u: goto label_152ab4;
        case 0x152ae8u: goto label_152ae8;
        case 0x152af8u: goto label_152af8;
        case 0x152b24u: goto label_152b24;
        case 0x152c68u: goto label_152c68;
        case 0x152cb4u: goto label_152cb4;
        case 0x152cc8u: goto label_152cc8;
        case 0x152ce4u: goto label_152ce4;
        case 0x152d20u: goto label_152d20;
        case 0x152e08u: goto label_152e08;
        default: break;
    }

    ctx->pc = 0x152a90u;

    // 0x152a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152aa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aa4: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x152AA4u;
    SET_GPR_U32(ctx, 31, 0x152AACu);
    ctx->pc = 0x152AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AA4u;
            // 0x152aa8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AACu; }
        if (ctx->pc != 0x152AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AACu; }
        if (ctx->pc != 0x152AACu) { return; }
    }
    ctx->pc = 0x152AACu;
label_152aac:
    // 0x152aac: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x152AACu;
    SET_GPR_U32(ctx, 31, 0x152AB4u);
    ctx->pc = 0x152AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AACu;
            // 0x152ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB4u; }
        if (ctx->pc != 0x152AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB4u; }
        if (ctx->pc != 0x152AB4u) { return; }
    }
    ctx->pc = 0x152AB4u;
label_152ab4:
    // 0x152ab4: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x152ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x152ab8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x152abc: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x152abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x152ac0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x152ac4: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x152ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
    // 0x152ac8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x152ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x152acc: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x152accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x152ad0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x152ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152ad4: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x152ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
    // 0x152ad8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x152ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x152adc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x152adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152ae0: 0xc054a98  jal         func_152A60
    ctx->pc = 0x152AE0u;
    SET_GPR_U32(ctx, 31, 0x152AE8u);
    ctx->pc = 0x152AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AE0u;
            // 0x152ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A60u;
    if (runtime->hasFunction(0x152A60u)) {
        auto targetFn = runtime->lookupFunction(0x152A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AE8u; }
        if (ctx->pc != 0x152AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHalfFontWPercent__6ClsMesFf_0x152a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AE8u; }
        if (ctx->pc != 0x152AE8u) { return; }
    }
    ctx->pc = 0x152AE8u;
label_152ae8:
    // 0x152ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x152af0: 0xc0b5128  jal         func_2D44A0
    ctx->pc = 0x152AF0u;
    SET_GPR_U32(ctx, 31, 0x152AF8u);
    ctx->pc = 0x152AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AF0u;
            // 0x152af4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44A0u;
    if (runtime->hasFunction(0x2D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AF8u; }
        if (ctx->pc != 0x152AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawSize__5CFontFii_0x2d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AF8u; }
        if (ctx->pc != 0x152AF8u) { return; }
    }
    ctx->pc = 0x152AF8u;
label_152af8:
    // 0x152af8: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x152af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x152afc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x152afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152b00: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x152b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x152b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b08: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x152b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x152b0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b10: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x152b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x152b14: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x152b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x152b18: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x152b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x152b1c: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x152b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x152b20: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x152b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_152b24:
    // 0x152b24: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x152b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x152b28: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152b2c: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x152b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x152b30: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x152b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152b34: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x152b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x152b38: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x152b3c: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x152b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x152b40: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x152b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x152b44: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x152b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x152b48: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x152b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x152b4c: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x152b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x152b50: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x152B50u;
    {
        const bool branch_taken_0x152b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B50u;
            // 0x152b54: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b50) {
            ctx->pc = 0x152B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152b24;
        }
    }
    ctx->pc = 0x152B58u;
    // 0x152b58: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x152b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x152b5c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x152b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x152b60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152b64: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x152b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x152b68: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x152b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x152b6c: 0x3467999a  ori         $a3, $v1, 0x999A
    ctx->pc = 0x152b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x152b70: 0xae420138  sw          $v0, 0x138($s2)
    ctx->pc = 0x152b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
    // 0x152b74: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x152b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x152b78: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x152b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x152b7c: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x152b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x152b80: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x152b84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x152b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152b88: 0x240f012c  addiu       $t7, $zero, 0x12C
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x152b8c: 0x240e00c8  addiu       $t6, $zero, 0xC8
    ctx->pc = 0x152b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x152b90: 0x240d0140  addiu       $t5, $zero, 0x140
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x152b94: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x152b94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152b98: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x152b98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x152b9c: 0x240a0027  addiu       $t2, $zero, 0x27
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x152ba0: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x152ba4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x152ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152ba8: 0xae45013c  sw          $a1, 0x13C($s2)
    ctx->pc = 0x152ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 5));
    // 0x152bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bb0: 0x34652020  ori         $a1, $v1, 0x2020
    ctx->pc = 0x152bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x152bb4: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x152bb8: 0xae430140  sw          $v1, 0x140($s2)
    ctx->pc = 0x152bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 3));
    // 0x152bbc: 0x8e5100c0  lw          $s1, 0xC0($s2)
    ctx->pc = 0x152bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x152bc0: 0x8e4300cc  lw          $v1, 0xCC($s2)
    ctx->pc = 0x152bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x152bc4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x152bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x152bc8: 0xae430144  sw          $v1, 0x144($s2)
    ctx->pc = 0x152bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 3));
    // 0x152bcc: 0x8e5100c4  lw          $s1, 0xC4($s2)
    ctx->pc = 0x152bccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x152bd0: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x152bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x152bd4: 0x72231818  mult1       $v1, $s1, $v1
    ctx->pc = 0x152bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x152bd8: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x152bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x152bdc: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x152bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x152be0: 0xae500150  sw          $s0, 0x150($s2)
    ctx->pc = 0x152be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 16));
    // 0x152be4: 0xae4f015c  sw          $t7, 0x15C($s2)
    ctx->pc = 0x152be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 15));
    // 0x152be8: 0xae4e0160  sw          $t6, 0x160($s2)
    ctx->pc = 0x152be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 14));
    // 0x152bec: 0xae4d0154  sw          $t5, 0x154($s2)
    ctx->pc = 0x152becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 13));
    // 0x152bf0: 0xae4e0158  sw          $t6, 0x158($s2)
    ctx->pc = 0x152bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 14));
    // 0x152bf4: 0xae4c0164  sw          $t4, 0x164($s2)
    ctx->pc = 0x152bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 12));
    // 0x152bf8: 0xae4b0168  sw          $t3, 0x168($s2)
    ctx->pc = 0x152bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 11));
    // 0x152bfc: 0xae500130  sw          $s0, 0x130($s2)
    ctx->pc = 0x152bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 16));
    // 0x152c00: 0xae420190  sw          $v0, 0x190($s2)
    ctx->pc = 0x152c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
    // 0x152c04: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x152c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    // 0x152c08: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x152c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    // 0x152c0c: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x152c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
    // 0x152c10: 0xae4201a0  sw          $v0, 0x1A0($s2)
    ctx->pc = 0x152c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
    // 0x152c14: 0xae4201a4  sw          $v0, 0x1A4($s2)
    ctx->pc = 0x152c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 2));
    // 0x152c18: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x152c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
    // 0x152c1c: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x152c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x152c20: 0xa24a01b0  sb          $t2, 0x1B0($s2)
    ctx->pc = 0x152c20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 432), (uint8_t)GPR_U32(ctx, 10));
    // 0x152c24: 0xa24901b1  sb          $t1, 0x1B1($s2)
    ctx->pc = 0x152c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 433), (uint8_t)GPR_U32(ctx, 9));
    // 0x152c28: 0xa24901b2  sb          $t1, 0x1B2($s2)
    ctx->pc = 0x152c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 434), (uint8_t)GPR_U32(ctx, 9));
    // 0x152c2c: 0xa24801b3  sb          $t0, 0x1B3($s2)
    ctx->pc = 0x152c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 435), (uint8_t)GPR_U32(ctx, 8));
    // 0x152c30: 0xae4701b8  sw          $a3, 0x1B8($s2)
    ctx->pc = 0x152c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 7));
    // 0x152c34: 0xae4701bc  sw          $a3, 0x1BC($s2)
    ctx->pc = 0x152c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 7));
    // 0x152c38: 0xae4001c0  sw          $zero, 0x1C0($s2)
    ctx->pc = 0x152c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 0));
    // 0x152c3c: 0xae4001c4  sw          $zero, 0x1C4($s2)
    ctx->pc = 0x152c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
    // 0x152c40: 0xae4001c8  sw          $zero, 0x1C8($s2)
    ctx->pc = 0x152c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
    // 0x152c44: 0xae460184  sw          $a2, 0x184($s2)
    ctx->pc = 0x152c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 6));
    // 0x152c48: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x152c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x152c4c: 0xae50018c  sw          $s0, 0x18C($s2)
    ctx->pc = 0x152c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 16));
    // 0x152c50: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x152c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
    // 0x152c54: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x152c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
    // 0x152c58: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x152c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
    // 0x152c5c: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x152c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
    // 0x152c60: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x152C60u;
    SET_GPR_U32(ctx, 31, 0x152C68u);
    ctx->pc = 0x152C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C60u;
            // 0x152c64: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C68u; }
        if (ctx->pc != 0x152C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C68u; }
        if (ctx->pc != 0x152C68u) { return; }
    }
    ctx->pc = 0x152C68u;
label_152c68:
    // 0x152c68: 0xae4017d8  sw          $zero, 0x17D8($s2)
    ctx->pc = 0x152c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6104), GPR_U32(ctx, 0));
    // 0x152c6c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x152c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x152c70: 0xae4017dc  sw          $zero, 0x17DC($s2)
    ctx->pc = 0x152c70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6108), GPR_U32(ctx, 0));
    // 0x152c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152c78: 0xae4317e0  sw          $v1, 0x17E0($s2)
    ctx->pc = 0x152c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6112), GPR_U32(ctx, 3));
    // 0x152c7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x152c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152c80: 0xae4217e4  sw          $v0, 0x17E4($s2)
    ctx->pc = 0x152c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 2));
    // 0x152c84: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x152c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c88: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x152c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
    // 0x152c8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152c90: 0xae4017ec  sw          $zero, 0x17EC($s2)
    ctx->pc = 0x152c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6124), GPR_U32(ctx, 0));
    // 0x152c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c98: 0xae4017f0  sw          $zero, 0x17F0($s2)
    ctx->pc = 0x152c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6128), GPR_U32(ctx, 0));
    // 0x152c9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ca0: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x152ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
    // 0x152ca4: 0xae4317f4  sw          $v1, 0x17F4($s2)
    ctx->pc = 0x152ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6132), GPR_U32(ctx, 3));
    // 0x152ca8: 0xae4017f8  sw          $zero, 0x17F8($s2)
    ctx->pc = 0x152ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6136), GPR_U32(ctx, 0));
    // 0x152cac: 0xae4017fc  sw          $zero, 0x17FC($s2)
    ctx->pc = 0x152cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6140), GPR_U32(ctx, 0));
    // 0x152cb0: 0xa2421800  sb          $v0, 0x1800($s2)
    ctx->pc = 0x152cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6144), (uint8_t)GPR_U32(ctx, 2));
label_152cb4:
    // 0x152cb4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x152cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cbc: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x152cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x152cc0: 0xc049c86  jal         func_127218
    ctx->pc = 0x152CC0u;
    SET_GPR_U32(ctx, 31, 0x152CC8u);
    ctx->pc = 0x152CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152CC0u;
            // 0x152cc4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CC8u; }
        if (ctx->pc != 0x152CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CC8u; }
        if (ctx->pc != 0x152CC8u) { return; }
    }
    ctx->pc = 0x152CC8u;
label_152cc8:
    // 0x152cc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152ccc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x152cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152cd0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x152CD0u;
    {
        const bool branch_taken_0x152cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152CD0u;
            // 0x152cd4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cd0) {
            ctx->pc = 0x152CB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152cb4;
        }
    }
    ctx->pc = 0x152CD8u;
    // 0x152cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ce0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x152ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_152ce4:
    // 0x152ce4: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x152ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x152ce8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x152cec: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x152cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x152cf0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x152cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152cf4: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x152cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x152cf8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x152cfc: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x152cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x152d00: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x152d00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x152d04: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x152d04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x152d08: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x152d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x152d0c: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x152d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x152d10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D10u;
            // 0x152d14: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152ce4;
        }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152d20:
    // 0x152d20: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x152d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x152d24: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x152d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152d28: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x152d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x152d2c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x152d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x152d30: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x152d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x152d34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x152d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x152d38: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x152d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x152d3c: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x152d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x152d40: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x152d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x152d44: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x152d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x152d48: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x152d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x152d4c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x152d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x152d50: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x152d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x152d54: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x152d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x152d58: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x152d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x152d5c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x152d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x152d60: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x152d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x152d64: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x152d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x152d68: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x152d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x152d6c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x152D6Cu;
    {
        const bool branch_taken_0x152d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D6Cu;
            // 0x152d70: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d6c) {
            ctx->pc = 0x152D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152d20;
        }
    }
    ctx->pc = 0x152D74u;
    // 0x152d74: 0xae401ac4  sw          $zero, 0x1AC4($s2)
    ctx->pc = 0x152d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6852), GPR_U32(ctx, 0));
    // 0x152d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d7c: 0xae401ac8  sw          $zero, 0x1AC8($s2)
    ctx->pc = 0x152d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
    // 0x152d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152d84: 0xae421acc  sw          $v0, 0x1ACC($s2)
    ctx->pc = 0x152d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 2));
    // 0x152d88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d8c: 0xae401ad0  sw          $zero, 0x1AD0($s2)
    ctx->pc = 0x152d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6864), GPR_U32(ctx, 0));
    // 0x152d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d94: 0xae401ad4  sw          $zero, 0x1AD4($s2)
    ctx->pc = 0x152d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6868), GPR_U32(ctx, 0));
    // 0x152d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d9c: 0xae401ad8  sw          $zero, 0x1AD8($s2)
    ctx->pc = 0x152d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6872), GPR_U32(ctx, 0));
    // 0x152da0: 0xae431adc  sw          $v1, 0x1ADC($s2)
    ctx->pc = 0x152da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6876), GPR_U32(ctx, 3));
    // 0x152da4: 0xae431ae0  sw          $v1, 0x1AE0($s2)
    ctx->pc = 0x152da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6880), GPR_U32(ctx, 3));
    // 0x152da8: 0xae431ae4  sw          $v1, 0x1AE4($s2)
    ctx->pc = 0x152da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 3));
    // 0x152dac: 0xae401ae8  sw          $zero, 0x1AE8($s2)
    ctx->pc = 0x152dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6888), GPR_U32(ctx, 0));
    // 0x152db0: 0xae401aec  sw          $zero, 0x1AEC($s2)
    ctx->pc = 0x152db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6892), GPR_U32(ctx, 0));
    // 0x152db4: 0xae401af0  sw          $zero, 0x1AF0($s2)
    ctx->pc = 0x152db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 0));
    // 0x152db8: 0xae401af4  sw          $zero, 0x1AF4($s2)
    ctx->pc = 0x152db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 0));
    // 0x152dbc: 0xae401af8  sw          $zero, 0x1AF8($s2)
    ctx->pc = 0x152dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6904), GPR_U32(ctx, 0));
    // 0x152dc0: 0xae401afc  sw          $zero, 0x1AFC($s2)
    ctx->pc = 0x152dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6908), GPR_U32(ctx, 0));
    // 0x152dc4: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x152dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
    // 0x152dc8: 0xae431b04  sw          $v1, 0x1B04($s2)
    ctx->pc = 0x152dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6916), GPR_U32(ctx, 3));
    // 0x152dcc: 0xae431b08  sw          $v1, 0x1B08($s2)
    ctx->pc = 0x152dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6920), GPR_U32(ctx, 3));
    // 0x152dd0: 0xae431b0c  sw          $v1, 0x1B0C($s2)
    ctx->pc = 0x152dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6924), GPR_U32(ctx, 3));
    // 0x152dd4: 0xae431b10  sw          $v1, 0x1B10($s2)
    ctx->pc = 0x152dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6928), GPR_U32(ctx, 3));
    // 0x152dd8: 0xae401b14  sw          $zero, 0x1B14($s2)
    ctx->pc = 0x152dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6932), GPR_U32(ctx, 0));
    // 0x152ddc: 0xae401b18  sw          $zero, 0x1B18($s2)
    ctx->pc = 0x152ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6936), GPR_U32(ctx, 0));
    // 0x152de0: 0xae401b1c  sw          $zero, 0x1B1C($s2)
    ctx->pc = 0x152de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6940), GPR_U32(ctx, 0));
    // 0x152de4: 0xae401b20  sw          $zero, 0x1B20($s2)
    ctx->pc = 0x152de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6944), GPR_U32(ctx, 0));
    // 0x152de8: 0xae401b24  sw          $zero, 0x1B24($s2)
    ctx->pc = 0x152de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6948), GPR_U32(ctx, 0));
    // 0x152dec: 0xae401b28  sw          $zero, 0x1B28($s2)
    ctx->pc = 0x152decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6952), GPR_U32(ctx, 0));
    // 0x152df0: 0xae401b2c  sw          $zero, 0x1B2C($s2)
    ctx->pc = 0x152df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6956), GPR_U32(ctx, 0));
    // 0x152df4: 0xae401b30  sw          $zero, 0x1B30($s2)
    ctx->pc = 0x152df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6960), GPR_U32(ctx, 0));
    // 0x152df8: 0xae401b34  sw          $zero, 0x1B34($s2)
    ctx->pc = 0x152df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6964), GPR_U32(ctx, 0));
    // 0x152dfc: 0xae401b3c  sw          $zero, 0x1B3C($s2)
    ctx->pc = 0x152dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6972), GPR_U32(ctx, 0));
    // 0x152e00: 0xae401b38  sw          $zero, 0x1B38($s2)
    ctx->pc = 0x152e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6968), GPR_U32(ctx, 0));
    // 0x152e04: 0xae401b40  sw          $zero, 0x1B40($s2)
    ctx->pc = 0x152e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6976), GPR_U32(ctx, 0));
label_152e08:
    // 0x152e08: 0x2453821  addu        $a3, $s2, $a1
    ctx->pc = 0x152e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x152e0c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x152e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x152e10: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x152e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x152e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x152e18: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x152e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x152e1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x152e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x152e20: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x152e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x152e24: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x152e28: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x152e28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x152e2c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x152e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x152e30: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x152e30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x152e34: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x152e34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x152e38: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x152e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x152e3c: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x152e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x152e40: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x152e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x152e44: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x152e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x152e48: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x152e48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x152e4c: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x152e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x152e50: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x152e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x152e54: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x152e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x152e58: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x152e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x152e5c: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x152e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x152e60: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x152e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x152e64: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x152e64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x152e68: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x152e68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x152e6c: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x152e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x152e70: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x152E70u;
    {
        const bool branch_taken_0x152e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E70u;
            // 0x152e74: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e70) {
            ctx->pc = 0x152E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152e08;
        }
    }
    ctx->pc = 0x152E78u;
    // 0x152e78: 0xae4021d4  sw          $zero, 0x21D4($s2)
    ctx->pc = 0x152e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8660), GPR_U32(ctx, 0));
    // 0x152e7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x152e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e80: 0xae4021d8  sw          $zero, 0x21D8($s2)
    ctx->pc = 0x152e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8664), GPR_U32(ctx, 0));
    // 0x152e84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e94: 0x3e00008  jr          $ra
    ctx->pc = 0x152E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E94u;
            // 0x152e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152E9Cu;
}
