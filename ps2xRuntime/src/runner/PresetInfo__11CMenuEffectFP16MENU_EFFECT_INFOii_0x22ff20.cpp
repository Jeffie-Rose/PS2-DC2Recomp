#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii
// Address: 0x22ff20 - 0x230954
void PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PresetInfo__11CMenuEffectFP16MENU_EFFECT_INFOii_0x22ff20");
#endif

    switch (ctx->pc) {
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22fff0u: goto label_22fff0;
        case 0x230008u: goto label_230008;
        case 0x23001cu: goto label_23001c;
        case 0x230030u: goto label_230030;
        case 0x230050u: goto label_230050;
        case 0x230074u: goto label_230074;
        case 0x230090u: goto label_230090;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300fcu: goto label_2300fc;
        case 0x230120u: goto label_230120;
        case 0x23013cu: goto label_23013c;
        case 0x23015cu: goto label_23015c;
        case 0x23019cu: goto label_23019c;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301bcu: goto label_2301bc;
        case 0x2301d0u: goto label_2301d0;
        case 0x2301e4u: goto label_2301e4;
        case 0x2301f8u: goto label_2301f8;
        case 0x230214u: goto label_230214;
        case 0x230228u: goto label_230228;
        case 0x23023cu: goto label_23023c;
        case 0x230258u: goto label_230258;
        case 0x230274u: goto label_230274;
        case 0x230290u: goto label_230290;
        case 0x2302b0u: goto label_2302b0;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302f4u: goto label_2302f4;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303f4u: goto label_2303f4;
        case 0x230410u: goto label_230410;
        case 0x230430u: goto label_230430;
        case 0x230450u: goto label_230450;
        case 0x230480u: goto label_230480;
        case 0x2304ccu: goto label_2304cc;
        case 0x230544u: goto label_230544;
        case 0x230590u: goto label_230590;
        case 0x230624u: goto label_230624;
        case 0x23064cu: goto label_23064c;
        case 0x23066cu: goto label_23066c;
        case 0x230688u: goto label_230688;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e8u: goto label_2306e8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307c0u: goto label_2307c0;
        case 0x2307f4u: goto label_2307f4;
        case 0x230828u: goto label_230828;
        case 0x23083cu: goto label_23083c;
        case 0x230864u: goto label_230864;
        case 0x2308a0u: goto label_2308a0;
        case 0x2308e4u: goto label_2308e4;
        case 0x2308fcu: goto label_2308fc;
        case 0x230920u: goto label_230920;
        default: break;
    }

    ctx->pc = 0x22ff20u;

    // 0x22ff20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22ff24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22ff28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22ff2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22ff30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22ff30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22ff38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ff38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22ff40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22ff44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22ff44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ff48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22ff48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ff4c: 0x80850009  lb          $a1, 0x9($a0)
    ctx->pc = 0x22ff4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x22ff50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22ff54: 0x10a40261  beq         $a1, $a0, . + 4 + (0x261 << 2)
    ctx->pc = 0x22FF54u;
    {
        const bool branch_taken_0x22ff54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x22FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF54u;
            // 0x22ff58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff54) {
            ctx->pc = 0x2308DCu;
            goto label_2308dc;
        }
    }
    ctx->pc = 0x22FF5Cu;
    // 0x22ff5c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22ff60: 0x10a30176  beq         $a1, $v1, . + 4 + (0x176 << 2)
    ctx->pc = 0x22FF60u;
    {
        const bool branch_taken_0x22ff60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF60u;
            // 0x22ff64: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff60) {
            ctx->pc = 0x23053Cu;
            goto label_23053c;
        }
    }
    ctx->pc = 0x22FF68u;
    // 0x22ff68: 0x10a30156  beq         $a1, $v1, . + 4 + (0x156 << 2)
    ctx->pc = 0x22FF68u;
    {
        const bool branch_taken_0x22ff68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF68u;
            // 0x22ff6c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff68) {
            ctx->pc = 0x2304C4u;
            goto label_2304c4;
        }
    }
    ctx->pc = 0x22FF70u;
    // 0x22ff70: 0x10a30116  beq         $a1, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x22FF70u;
    {
        const bool branch_taken_0x22ff70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF70u;
            // 0x22ff74: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff70) {
            ctx->pc = 0x2303CCu;
            goto label_2303cc;
        }
    }
    ctx->pc = 0x22FF78u;
    // 0x22ff78: 0x10a300f4  beq         $a1, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x22FF78u;
    {
        const bool branch_taken_0x22ff78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF78u;
            // 0x22ff7c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff78) {
            ctx->pc = 0x23034Cu;
            goto label_23034c;
        }
    }
    ctx->pc = 0x22FF80u;
    // 0x22ff80: 0x10a300e6  beq         $a1, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x22FF80u;
    {
        const bool branch_taken_0x22ff80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF80u;
            // 0x22ff84: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff80) {
            ctx->pc = 0x23031Cu;
            goto label_23031c;
        }
    }
    ctx->pc = 0x22FF88u;
    // 0x22ff88: 0x10a300e0  beq         $a1, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x22FF88u;
    {
        const bool branch_taken_0x22ff88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF88u;
            // 0x22ff8c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff88) {
            ctx->pc = 0x23030Cu;
            goto label_23030c;
        }
    }
    ctx->pc = 0x22FF90u;
    // 0x22ff90: 0x10a30080  beq         $a1, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x22FF90u;
    {
        const bool branch_taken_0x22ff90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF90u;
            // 0x22ff94: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff90) {
            ctx->pc = 0x230194u;
            goto label_230194;
        }
    }
    ctx->pc = 0x22FF98u;
    // 0x22ff98: 0x10a3007e  beq         $a1, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x22FF98u;
    {
        const bool branch_taken_0x22ff98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF98u;
            // 0x22ff9c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff98) {
            ctx->pc = 0x230194u;
            goto label_230194;
        }
    }
    ctx->pc = 0x22FFA0u;
    // 0x22ffa0: 0x10a30074  beq         $a1, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x22FFA0u;
    {
        const bool branch_taken_0x22ffa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFA0u;
            // 0x22ffa4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffa0) {
            ctx->pc = 0x230174u;
            goto label_230174;
        }
    }
    ctx->pc = 0x22FFA8u;
    // 0x22ffa8: 0x10a3005b  beq         $a1, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x22FFA8u;
    {
        const bool branch_taken_0x22ffa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFA8u;
            // 0x22ffac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffa8) {
            ctx->pc = 0x230118u;
            goto label_230118;
        }
    }
    ctx->pc = 0x22FFB0u;
    // 0x22ffb0: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x22FFB0u;
    {
        const bool branch_taken_0x22ffb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFB0u;
            // 0x22ffb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffb0) {
            ctx->pc = 0x2300A8u;
            goto label_2300a8;
        }
    }
    ctx->pc = 0x22FFB8u;
    // 0x22ffb8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FFB8u;
    {
        const bool branch_taken_0x22ffb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFB8u;
            // 0x22ffbc: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffb8) {
            ctx->pc = 0x22FFC8u;
            goto label_22ffc8;
        }
    }
    ctx->pc = 0x22FFC0u;
    // 0x22ffc0: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x22FFC0u;
    {
        const bool branch_taken_0x22ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFC0u;
            // 0x22ffc4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffc0) {
            ctx->pc = 0x230934u;
            goto label_230934;
        }
    }
    ctx->pc = 0x22FFC8u;
label_22ffc8:
    // 0x22ffc8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22FFC8u;
    SET_GPR_U32(ctx, 31, 0x22FFD0u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFD0u; }
        if (ctx->pc != 0x22FFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFD0u; }
        if (ctx->pc != 0x22FFD0u) { return; }
    }
    ctx->pc = 0x22FFD0u;
label_22ffd0:
    // 0x22ffd0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x22ffd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ffd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ffd8: 0x0  nop
    ctx->pc = 0x22ffd8u;
    // NOP
    // 0x22ffdc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x22ffdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x22ffe0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22FFE0u;
    SET_GPR_U32(ctx, 31, 0x22FFE8u);
    ctx->pc = 0x22FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFE0u;
            // 0x22ffe4: 0xe66c0004  swc1        $f12, 0x4($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFE8u; }
        if (ctx->pc != 0x22FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFE8u; }
        if (ctx->pc != 0x22FFE8u) { return; }
    }
    ctx->pc = 0x22FFE8u;
label_22ffe8:
    // 0x22ffe8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22FFE8u;
    SET_GPR_U32(ctx, 31, 0x22FFF0u);
    ctx->pc = 0x22FFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFE8u;
            // 0x22ffec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFF0u; }
        if (ctx->pc != 0x22FFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFF0u; }
        if (ctx->pc != 0x22FFF0u) { return; }
    }
    ctx->pc = 0x22FFF0u;
label_22fff0:
    // 0x22fff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22fff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fff4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22fff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22fffc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x22fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x230000: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230000u;
    SET_GPR_U32(ctx, 31, 0x230008u);
    ctx->pc = 0x230004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230000u;
            // 0x230004: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230008u; }
        if (ctx->pc != 0x230008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230008u; }
        if (ctx->pc != 0x230008u) { return; }
    }
    ctx->pc = 0x230008u;
label_230008:
    // 0x230008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23000c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x23000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x230010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230014: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230014u;
    SET_GPR_U32(ctx, 31, 0x23001Cu);
    ctx->pc = 0x230018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230014u;
            // 0x230018: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23001Cu; }
        if (ctx->pc != 0x23001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23001Cu; }
        if (ctx->pc != 0x23001Cu) { return; }
    }
    ctx->pc = 0x23001Cu;
label_23001c:
    // 0x23001c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23001cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230020: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x230020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x230024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230028: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230028u;
    SET_GPR_U32(ctx, 31, 0x230030u);
    ctx->pc = 0x23002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230028u;
            // 0x23002c: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230030u; }
        if (ctx->pc != 0x230030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230030u; }
        if (ctx->pc != 0x230030u) { return; }
    }
    ctx->pc = 0x230030u;
label_230030:
    // 0x230030: 0x86830018  lh          $v1, 0x18($s4)
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x230034: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x230034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230038: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23003c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23003cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230040: 0x0  nop
    ctx->pc = 0x230040u;
    // NOP
    // 0x230044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230048: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230048u;
    SET_GPR_U32(ctx, 31, 0x230050u);
    ctx->pc = 0x23004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230048u;
            // 0x23004c: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230050u; }
        if (ctx->pc != 0x230050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230050u; }
        if (ctx->pc != 0x230050u) { return; }
    }
    ctx->pc = 0x230050u;
label_230050:
    // 0x230050: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x230054: 0x21023  negu        $v0, $v0
    ctx->pc = 0x230054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x230058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23005c: 0x0  nop
    ctx->pc = 0x23005cu;
    // NOP
    // 0x230060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230064: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230064u;
    {
        const bool branch_taken_0x230064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230064u;
            // 0x230068: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230064) {
            ctx->pc = 0x230088u;
            goto label_230088;
        }
    }
    ctx->pc = 0x23006Cu;
    // 0x23006c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x23006Cu;
    SET_GPR_U32(ctx, 31, 0x230074u);
    ctx->pc = 0x230070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23006Cu;
            // 0x230070: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230074u; }
        if (ctx->pc != 0x230074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230074u; }
        if (ctx->pc != 0x230074u) { return; }
    }
    ctx->pc = 0x230074u;
label_230074:
    // 0x230074: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x230078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23007c: 0x0  nop
    ctx->pc = 0x23007cu;
    // NOP
    // 0x230080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230084: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x230084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_230088:
    // 0x230088: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230088u;
    SET_GPR_U32(ctx, 31, 0x230090u);
    ctx->pc = 0x23008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230088u;
            // 0x23008c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230090u; }
        if (ctx->pc != 0x230090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230090u; }
        if (ctx->pc != 0x230090u) { return; }
    }
    ctx->pc = 0x230090u;
label_230090:
    // 0x230090: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x230090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x230094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230098: 0x0  nop
    ctx->pc = 0x230098u;
    // NOP
    // 0x23009c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23009cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2300a0: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x2300A0u;
    {
        const bool branch_taken_0x2300a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300A0u;
            // 0x2300a4: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300a0) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2300A8u;
label_2300a8:
    // 0x2300a8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2300A8u;
    SET_GPR_U32(ctx, 31, 0x2300B0u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300B0u; }
        if (ctx->pc != 0x2300B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300B0u; }
        if (ctx->pc != 0x2300B0u) { return; }
    }
    ctx->pc = 0x2300B0u;
label_2300b0:
    // 0x2300b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2300b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2300b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2300bc: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2300BCu;
    SET_GPR_U32(ctx, 31, 0x2300C4u);
    ctx->pc = 0x2300C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2300BCu;
            // 0x2300c0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300C4u; }
        if (ctx->pc != 0x2300C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300C4u; }
        if (ctx->pc != 0x2300C4u) { return; }
    }
    ctx->pc = 0x2300C4u;
label_2300c4:
    // 0x2300c4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2300c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2300cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300d0: 0x0  nop
    ctx->pc = 0x2300d0u;
    // NOP
    // 0x2300d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2300d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2300d8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2300D8u;
    SET_GPR_U32(ctx, 31, 0x2300E0u);
    ctx->pc = 0x2300DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2300D8u;
            // 0x2300dc: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300E0u; }
        if (ctx->pc != 0x2300E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300E0u; }
        if (ctx->pc != 0x2300E0u) { return; }
    }
    ctx->pc = 0x2300E0u;
label_2300e0:
    // 0x2300e0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2300e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2300e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2300e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2300ec: 0x0  nop
    ctx->pc = 0x2300ecu;
    // NOP
    // 0x2300f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2300f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2300f4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2300F4u;
    SET_GPR_U32(ctx, 31, 0x2300FCu);
    ctx->pc = 0x2300F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2300F4u;
            // 0x2300f8: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300FCu; }
        if (ctx->pc != 0x2300FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300FCu; }
        if (ctx->pc != 0x2300FCu) { return; }
    }
    ctx->pc = 0x2300FCu;
label_2300fc:
    // 0x2300fc: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x230100: 0x31823  negu        $v1, $v1
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x230104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230108: 0x0  nop
    ctx->pc = 0x230108u;
    // NOP
    // 0x23010c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23010cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230110: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x230110u;
    {
        const bool branch_taken_0x230110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230110u;
            // 0x230114: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230110) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x230118u;
label_230118:
    // 0x230118: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230118u;
    SET_GPR_U32(ctx, 31, 0x230120u);
    ctx->pc = 0x23011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230118u;
            // 0x23011c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230120u; }
        if (ctx->pc != 0x230120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230120u; }
        if (ctx->pc != 0x230120u) { return; }
    }
    ctx->pc = 0x230120u;
label_230120:
    // 0x230120: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x230124: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x230128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23012c: 0x0  nop
    ctx->pc = 0x23012cu;
    // NOP
    // 0x230130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230134: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230134u;
    SET_GPR_U32(ctx, 31, 0x23013Cu);
    ctx->pc = 0x230138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230134u;
            // 0x230138: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23013Cu; }
        if (ctx->pc != 0x23013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23013Cu; }
        if (ctx->pc != 0x23013Cu) { return; }
    }
    ctx->pc = 0x23013Cu;
label_23013c:
    // 0x23013c: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x23013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x230140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230148: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x230148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x23014c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23014cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230150: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x230150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x230154: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230154u;
    SET_GPR_U32(ctx, 31, 0x23015Cu);
    ctx->pc = 0x230158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230154u;
            // 0x230158: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23015Cu; }
        if (ctx->pc != 0x23015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23015Cu; }
        if (ctx->pc != 0x23015Cu) { return; }
    }
    ctx->pc = 0x23015Cu;
label_23015c:
    // 0x23015c: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x230160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230164: 0x0  nop
    ctx->pc = 0x230164u;
    // NOP
    // 0x230168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23016c: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x23016Cu;
    {
        const bool branch_taken_0x23016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23016Cu;
            // 0x230170: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23016c) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x230174u;
label_230174:
    // 0x230174: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x230174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x230178: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x230178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x23017c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x23017cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x230180: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x230180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x230184: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x230184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x230188: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x230188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x23018c: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x23018Cu;
    {
        const bool branch_taken_0x23018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23018Cu;
            // 0x230190: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23018c) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x230194u;
label_230194:
    // 0x230194: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230194u;
    SET_GPR_U32(ctx, 31, 0x23019Cu);
    ctx->pc = 0x230198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230194u;
            // 0x230198: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23019Cu; }
        if (ctx->pc != 0x23019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23019Cu; }
        if (ctx->pc != 0x23019Cu) { return; }
    }
    ctx->pc = 0x23019Cu;
label_23019c:
    // 0x23019c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x23019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2301a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301a4: 0x0  nop
    ctx->pc = 0x2301a4u;
    // NOP
    // 0x2301a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2301a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2301ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2301ACu;
    SET_GPR_U32(ctx, 31, 0x2301B4u);
    ctx->pc = 0x2301B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301ACu;
            // 0x2301b0: 0xe66c0004  swc1        $f12, 0x4($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301B4u; }
        if (ctx->pc != 0x2301B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301B4u; }
        if (ctx->pc != 0x2301B4u) { return; }
    }
    ctx->pc = 0x2301B4u;
label_2301b4:
    // 0x2301b4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2301B4u;
    SET_GPR_U32(ctx, 31, 0x2301BCu);
    ctx->pc = 0x2301B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301B4u;
            // 0x2301b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301BCu; }
        if (ctx->pc != 0x2301BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301BCu; }
        if (ctx->pc != 0x2301BCu) { return; }
    }
    ctx->pc = 0x2301BCu;
label_2301bc:
    // 0x2301bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2301c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2301c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2301c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2301c8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2301C8u;
    SET_GPR_U32(ctx, 31, 0x2301D0u);
    ctx->pc = 0x2301CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301C8u;
            // 0x2301cc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301D0u; }
        if (ctx->pc != 0x2301D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301D0u; }
        if (ctx->pc != 0x2301D0u) { return; }
    }
    ctx->pc = 0x2301D0u;
label_2301d0:
    // 0x2301d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2301d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2301d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2301dc: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2301DCu;
    SET_GPR_U32(ctx, 31, 0x2301E4u);
    ctx->pc = 0x2301E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301DCu;
            // 0x2301e0: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301E4u; }
        if (ctx->pc != 0x2301E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301E4u; }
        if (ctx->pc != 0x2301E4u) { return; }
    }
    ctx->pc = 0x2301E4u;
label_2301e4:
    // 0x2301e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2301e8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2301ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2301ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2301f0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2301F0u;
    SET_GPR_U32(ctx, 31, 0x2301F8u);
    ctx->pc = 0x2301F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2301F0u;
            // 0x2301f4: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301F8u; }
        if (ctx->pc != 0x2301F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2301F8u; }
        if (ctx->pc != 0x2301F8u) { return; }
    }
    ctx->pc = 0x2301F8u;
label_2301f8:
    // 0x2301f8: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x2301fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x230200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230204: 0x0  nop
    ctx->pc = 0x230204u;
    // NOP
    // 0x230208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23020c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x23020Cu;
    SET_GPR_U32(ctx, 31, 0x230214u);
    ctx->pc = 0x230210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23020Cu;
            // 0x230210: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230214u; }
        if (ctx->pc != 0x230214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230214u; }
        if (ctx->pc != 0x230214u) { return; }
    }
    ctx->pc = 0x230214u;
label_230214:
    // 0x230214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230218: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x230218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23021c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23021cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230220: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230220u;
    SET_GPR_U32(ctx, 31, 0x230228u);
    ctx->pc = 0x230224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230220u;
            // 0x230224: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230228u; }
        if (ctx->pc != 0x230228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230228u; }
        if (ctx->pc != 0x230228u) { return; }
    }
    ctx->pc = 0x230228u;
label_230228:
    // 0x230228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23022c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x23022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230234: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230234u;
    SET_GPR_U32(ctx, 31, 0x23023Cu);
    ctx->pc = 0x230238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230234u;
            // 0x230238: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23023Cu; }
        if (ctx->pc != 0x23023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23023Cu; }
        if (ctx->pc != 0x23023Cu) { return; }
    }
    ctx->pc = 0x23023Cu;
label_23023c:
    // 0x23023c: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x230240: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230248: 0x0  nop
    ctx->pc = 0x230248u;
    // NOP
    // 0x23024c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23024cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230250: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230250u;
    SET_GPR_U32(ctx, 31, 0x230258u);
    ctx->pc = 0x230254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230250u;
            // 0x230254: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230258u; }
        if (ctx->pc != 0x230258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230258u; }
        if (ctx->pc != 0x230258u) { return; }
    }
    ctx->pc = 0x230258u;
label_230258:
    // 0x230258: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23025c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x23025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x230260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230264: 0x0  nop
    ctx->pc = 0x230264u;
    // NOP
    // 0x230268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23026c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x23026Cu;
    SET_GPR_U32(ctx, 31, 0x230274u);
    ctx->pc = 0x230270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23026Cu;
            // 0x230270: 0xe660003c  swc1        $f0, 0x3C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230274u; }
        if (ctx->pc != 0x230274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230274u; }
        if (ctx->pc != 0x230274u) { return; }
    }
    ctx->pc = 0x230274u;
label_230274:
    // 0x230274: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x230274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x230278: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23027c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23027cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230280: 0x0  nop
    ctx->pc = 0x230280u;
    // NOP
    // 0x230284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230288: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230288u;
    SET_GPR_U32(ctx, 31, 0x230290u);
    ctx->pc = 0x23028Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230288u;
            // 0x23028c: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230290u; }
        if (ctx->pc != 0x230290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230290u; }
        if (ctx->pc != 0x230290u) { return; }
    }
    ctx->pc = 0x230290u;
label_230290:
    // 0x230290: 0x21023  negu        $v0, $v0
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x230294: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x230298: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x230298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23029c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2302a0: 0x0  nop
    ctx->pc = 0x2302a0u;
    // NOP
    // 0x2302a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2302a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2302a8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2302A8u;
    SET_GPR_U32(ctx, 31, 0x2302B0u);
    ctx->pc = 0x2302ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302A8u;
            // 0x2302ac: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302B0u; }
        if (ctx->pc != 0x2302B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302B0u; }
        if (ctx->pc != 0x2302B0u) { return; }
    }
    ctx->pc = 0x2302B0u;
label_2302b0:
    // 0x2302b0: 0x86830018  lh          $v1, 0x18($s4)
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2302b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2302b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2302b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2302bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2302bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2302c0: 0x0  nop
    ctx->pc = 0x2302c0u;
    // NOP
    // 0x2302c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2302c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2302c8: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2302C8u;
    SET_GPR_U32(ctx, 31, 0x2302D0u);
    ctx->pc = 0x2302CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302C8u;
            // 0x2302cc: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302D0u; }
        if (ctx->pc != 0x2302D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302D0u; }
        if (ctx->pc != 0x2302D0u) { return; }
    }
    ctx->pc = 0x2302D0u;
label_2302d0:
    // 0x2302d0: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2302d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2302d4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2302d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2302d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2302d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2302dc: 0x0  nop
    ctx->pc = 0x2302dcu;
    // NOP
    // 0x2302e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2302e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2302e4: 0x12000192  beqz        $s0, . + 4 + (0x192 << 2)
    ctx->pc = 0x2302E4u;
    {
        const bool branch_taken_0x2302e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2302E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302E4u;
            // 0x2302e8: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2302e4) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2302ECu;
    // 0x2302ec: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2302ECu;
    SET_GPR_U32(ctx, 31, 0x2302F4u);
    ctx->pc = 0x2302F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302ECu;
            // 0x2302f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302F4u; }
        if (ctx->pc != 0x2302F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302F4u; }
        if (ctx->pc != 0x2302F4u) { return; }
    }
    ctx->pc = 0x2302F4u;
label_2302f4:
    // 0x2302f4: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x2302f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2302f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2302f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2302fc: 0x0  nop
    ctx->pc = 0x2302fcu;
    // NOP
    // 0x230300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230304: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x230304u;
    {
        const bool branch_taken_0x230304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230304u;
            // 0x230308: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230304) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x23030Cu;
label_23030c:
    // 0x23030c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x23030cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x230310: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x230310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x230314: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x230314u;
    {
        const bool branch_taken_0x230314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230314u;
            // 0x230318: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230314) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x23031Cu;
label_23031c:
    // 0x23031c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x23031cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x230320: 0x3c033f61  lui         $v1, 0x3F61
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16225 << 16));
    // 0x230324: 0x86850018  lh          $a1, 0x18($s4)
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x230328: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x23032c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x23032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x230330: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x230330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230334: 0x0  nop
    ctx->pc = 0x230334u;
    // NOP
    // 0x230338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23033c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x23033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x230340: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x230340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
    // 0x230344: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x230344u;
    {
        const bool branch_taken_0x230344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230344u;
            // 0x230348: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230344) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x23034Cu;
label_23034c:
    // 0x23034c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x23034cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x230350: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230354: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x230354u;
    {
        const bool branch_taken_0x230354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230354u;
            // 0x230358: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230354) {
            ctx->pc = 0x230390u;
            goto label_230390;
        }
    }
    ctx->pc = 0x23035Cu;
    // 0x23035c: 0x86840018  lh          $a0, 0x18($s4)
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x230360: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x230360u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230364: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x230368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23036c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x23036cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230374: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x230378: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x230378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23037c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x23037cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x230380: 0x0  nop
    ctx->pc = 0x230380u;
    // NOP
    // 0x230384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230388u;
    {
        const bool branch_taken_0x230388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230388u;
            // 0x23038c: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230388) {
            ctx->pc = 0x2303A4u;
            goto label_2303a4;
        }
    }
    ctx->pc = 0x230390u;
label_230390:
    // 0x230390: 0x86830018  lh          $v1, 0x18($s4)
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x230394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230398: 0x0  nop
    ctx->pc = 0x230398u;
    // NOP
    // 0x23039c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23039cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2303a0: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x2303a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_2303a4:
    // 0x2303a4: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2303a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2303a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2303ac: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x2303acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
    // 0x2303b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2303b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2303b4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x2303b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x2303b8: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x2303b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x2303bc: 0x1200015c  beqz        $s0, . + 4 + (0x15C << 2)
    ctx->pc = 0x2303BCu;
    {
        const bool branch_taken_0x2303bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2303BCu;
            // 0x2303c0: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303bc) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2303C4u;
    // 0x2303c4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x2303C4u;
    {
        const bool branch_taken_0x2303c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2303C4u;
            // 0x2303c8: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303c4) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2303CCu;
label_2303cc:
    // 0x2303cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2303d0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2303D0u;
    SET_GPR_U32(ctx, 31, 0x2303D8u);
    ctx->pc = 0x2303D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2303D0u;
            // 0x2303d4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303D8u; }
        if (ctx->pc != 0x2303D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303D8u; }
        if (ctx->pc != 0x2303D8u) { return; }
    }
    ctx->pc = 0x2303D8u;
label_2303d8:
    // 0x2303d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2303dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2303dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2303e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2303e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2303e4: 0x0  nop
    ctx->pc = 0x2303e4u;
    // NOP
    // 0x2303e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2303e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2303ec: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2303ECu;
    SET_GPR_U32(ctx, 31, 0x2303F4u);
    ctx->pc = 0x2303F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2303ECu;
            // 0x2303f0: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303F4u; }
        if (ctx->pc != 0x2303F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2303F4u; }
        if (ctx->pc != 0x2303F4u) { return; }
    }
    ctx->pc = 0x2303F4u;
label_2303f4:
    // 0x2303f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2303f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2303f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2303fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2303fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230400: 0x0  nop
    ctx->pc = 0x230400u;
    // NOP
    // 0x230404: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230408: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230408u;
    SET_GPR_U32(ctx, 31, 0x230410u);
    ctx->pc = 0x23040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230408u;
            // 0x23040c: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230410u; }
        if (ctx->pc != 0x230410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230410u; }
        if (ctx->pc != 0x230410u) { return; }
    }
    ctx->pc = 0x230410u;
label_230410:
    // 0x230410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230410u;
    {
        const bool branch_taken_0x230410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230410u;
            // 0x230414: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230410) {
            ctx->pc = 0x230428u;
            goto label_230428;
        }
    }
    ctx->pc = 0x230418u;
    // 0x230418: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x230418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23041c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23041cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x230420: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x230420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x230424: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230428:
    // 0x230428: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230428u;
    SET_GPR_U32(ctx, 31, 0x230430u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230430u; }
        if (ctx->pc != 0x230430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230430u; }
        if (ctx->pc != 0x230430u) { return; }
    }
    ctx->pc = 0x230430u;
label_230430:
    // 0x230430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230430u;
    {
        const bool branch_taken_0x230430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230430u;
            // 0x230434: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230430) {
            ctx->pc = 0x230448u;
            goto label_230448;
        }
    }
    ctx->pc = 0x230438u;
    // 0x230438: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x230438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23043c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23043cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x230440: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x230440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x230444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_230448:
    // 0x230448: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230448u;
    SET_GPR_U32(ctx, 31, 0x230450u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230450u; }
        if (ctx->pc != 0x230450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230450u; }
        if (ctx->pc != 0x230450u) { return; }
    }
    ctx->pc = 0x230450u;
label_230450:
    // 0x230450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230454: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230458: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x230458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23045c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23045cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x230460: 0x86820014  lh          $v0, 0x14($s4)
    ctx->pc = 0x230460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x230464: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x230464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23046c: 0x0  nop
    ctx->pc = 0x23046cu;
    // NOP
    // 0x230470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230474: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x230474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230478: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230478u;
    SET_GPR_U32(ctx, 31, 0x230480u);
    ctx->pc = 0x23047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230478u;
            // 0x23047c: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230480u; }
        if (ctx->pc != 0x230480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230480u; }
        if (ctx->pc != 0x230480u) { return; }
    }
    ctx->pc = 0x230480u;
label_230480:
    // 0x230480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230484: 0x86860016  lh          $a2, 0x16($s4)
    ctx->pc = 0x230484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x230488: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x230488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23048c: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x230490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x230490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x230494: 0x3c04c0c0  lui         $a0, 0xC0C0
    ctx->pc = 0x230494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49344 << 16));
    // 0x230498: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23049c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x23049cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2304a0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2304a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2304a4: 0x0  nop
    ctx->pc = 0x2304a4u;
    // NOP
    // 0x2304a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2304a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2304ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2304acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2304b0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2304b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2304b4: 0xae650028  sw          $a1, 0x28($s3)
    ctx->pc = 0x2304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 5));
    // 0x2304b8: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x2304b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
    // 0x2304bc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2304BCu;
    {
        const bool branch_taken_0x2304bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2304BCu;
            // 0x2304c0: 0xae630024  sw          $v1, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304bc) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2304C4u;
label_2304c4:
    // 0x2304c4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2304C4u;
    SET_GPR_U32(ctx, 31, 0x2304CCu);
    ctx->pc = 0x2304C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2304C4u;
            // 0x2304c8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304CCu; }
        if (ctx->pc != 0x2304CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2304CCu; }
        if (ctx->pc != 0x2304CCu) { return; }
    }
    ctx->pc = 0x2304CCu;
label_2304cc:
    // 0x2304cc: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2304d0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2304d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2304d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2304d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2304d8: 0x44911800  mtc1        $s1, $f3
    ctx->pc = 0x2304d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2304dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2304dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2304e0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2304e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2304e4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2304e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2304e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2304e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2304ec: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2304ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2304f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2304f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2304f4: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2304f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2304f8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2304f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2304fc: 0xe6630004  swc1        $f3, 0x4($s3)
    ctx->pc = 0x2304fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x230500: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x230500u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x230504: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x230504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
    // 0x230508: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x230508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x23050c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x23050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230514: 0x0  nop
    ctx->pc = 0x230514u;
    // NOP
    // 0x230518: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x230518u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x23051c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23051cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230520: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230520u;
    {
        const bool branch_taken_0x230520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230520u;
            // 0x230524: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230520) {
            ctx->pc = 0x230534u;
            goto label_230534;
        }
    }
    ctx->pc = 0x230528u;
    // 0x230528: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x230528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
    // 0x23052c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x23052Cu;
    {
        const bool branch_taken_0x23052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23052Cu;
            // 0x230530: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23052c) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x230534u;
    {
        const bool branch_taken_0x230534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230534u;
            // 0x230538: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230534) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x23053Cu;
label_23053c:
    // 0x23053c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x23053Cu;
    SET_GPR_U32(ctx, 31, 0x230544u);
    ctx->pc = 0x230540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23053Cu;
            // 0x230540: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230544u; }
        if (ctx->pc != 0x230544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230544u; }
        if (ctx->pc != 0x230544u) { return; }
    }
    ctx->pc = 0x230544u;
label_230544:
    // 0x230544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230548: 0x0  nop
    ctx->pc = 0x230548u;
    // NOP
    // 0x23054c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23054cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230550: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x230550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x230554: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230554u;
    {
        const bool branch_taken_0x230554 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x230558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230554u;
            // 0x230558: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230554) {
            ctx->pc = 0x230568u;
            goto label_230568;
        }
    }
    ctx->pc = 0x23055Cu;
    // 0x23055c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23055Cu;
    {
        const bool branch_taken_0x23055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23055c) {
            ctx->pc = 0x230568u;
            goto label_230568;
        }
    }
    ctx->pc = 0x230564u;
    // 0x230564: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x230564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_230568:
    // 0x230568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23056c: 0x0  nop
    ctx->pc = 0x23056cu;
    // NOP
    // 0x230570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230574: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x230574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x230578: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x230578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x23057c: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x23057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x230580: 0x86820016  lh          $v0, 0x16($s4)
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x230584: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x230584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x230588: 0xc0a248c  jal         func_289230
    ctx->pc = 0x230588u;
    SET_GPR_U32(ctx, 31, 0x230590u);
    ctx->pc = 0x23058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230588u;
            // 0x23058c: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230590u; }
        if (ctx->pc != 0x230590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230590u; }
        if (ctx->pc != 0x230590u) { return; }
    }
    ctx->pc = 0x230590u;
label_230590:
    // 0x230590: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x230594: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23059c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2305a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2305a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2305a4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2305a8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2305ac: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2305b0: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2305b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2305b8: 0x244200b2  addiu       $v0, $v0, 0xB2
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 178));
    // 0x2305bc: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2305bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2305c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2305c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2305c4: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2305c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2305c8: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2305c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2305cc: 0x24630178  addiu       $v1, $v1, 0x178
    ctx->pc = 0x2305ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 376));
    // 0x2305d0: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x2305d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2305d4: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2305d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2305d8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2305dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2305dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2305e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2305e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2305e4: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x2305e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2305e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2305e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2305ec: 0x0  nop
    ctx->pc = 0x2305ecu;
    // NOP
    // 0x2305f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2305f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2305f4: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2305f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2305f8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2305fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x230600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230604: 0x0  nop
    ctx->pc = 0x230604u;
    // NOP
    // 0x230608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23060c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x23060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x230610: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x230610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230614: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x230614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x230618: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x230618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23061c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x23061Cu;
    SET_GPR_U32(ctx, 31, 0x230624u);
    ctx->pc = 0x230620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23061Cu;
            // 0x230620: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230624u; }
        if (ctx->pc != 0x230624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230624u; }
        if (ctx->pc != 0x230624u) { return; }
    }
    ctx->pc = 0x230624u;
label_230624:
    // 0x230624: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x230628: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x23062c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x23062cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x230630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230634: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230638: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x230638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23063c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23063cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230640: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x230640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x230644: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230644u;
    SET_GPR_U32(ctx, 31, 0x23064Cu);
    ctx->pc = 0x230648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230644u;
            // 0x230648: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23064Cu; }
        if (ctx->pc != 0x23064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23064Cu; }
        if (ctx->pc != 0x23064Cu) { return; }
    }
    ctx->pc = 0x23064Cu;
label_23064c:
    // 0x23064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230650: 0x0  nop
    ctx->pc = 0x230650u;
    // NOP
    // 0x230654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230658: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x230658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x23065c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23065Cu;
    {
        const bool branch_taken_0x23065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23065Cu;
            // 0x230660: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23065c) {
            ctx->pc = 0x23069Cu;
            goto label_23069c;
        }
    }
    ctx->pc = 0x230664u;
    // 0x230664: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230664u;
    SET_GPR_U32(ctx, 31, 0x23066Cu);
    ctx->pc = 0x230668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230664u;
            // 0x230668: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23066Cu; }
        if (ctx->pc != 0x23066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23066Cu; }
        if (ctx->pc != 0x23066Cu) { return; }
    }
    ctx->pc = 0x23066Cu;
label_23066c:
    // 0x23066c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x23066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x230670: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x230670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x230674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230678: 0x0  nop
    ctx->pc = 0x230678u;
    // NOP
    // 0x23067c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23067cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230680: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230680u;
    SET_GPR_U32(ctx, 31, 0x230688u);
    ctx->pc = 0x230684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230680u;
            // 0x230684: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230688u; }
        if (ctx->pc != 0x230688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230688u; }
        if (ctx->pc != 0x230688u) { return; }
    }
    ctx->pc = 0x230688u;
label_230688:
    // 0x230688: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230690: 0x0  nop
    ctx->pc = 0x230690u;
    // NOP
    // 0x230694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230698: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x230698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_23069c:
    // 0x23069c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x23069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2306a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2306a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2306a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2306a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2306a8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2306A8u;
    SET_GPR_U32(ctx, 31, 0x2306B0u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306B0u; }
        if (ctx->pc != 0x2306B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306B0u; }
        if (ctx->pc != 0x2306B0u) { return; }
    }
    ctx->pc = 0x2306B0u;
label_2306b0:
    // 0x2306b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2306b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2306b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2306b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2306bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2306bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2306c0: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2306C0u;
    SET_GPR_U32(ctx, 31, 0x2306C8u);
    ctx->pc = 0x2306C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306C0u;
            // 0x2306c4: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306C8u; }
        if (ctx->pc != 0x2306C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306C8u; }
        if (ctx->pc != 0x2306C8u) { return; }
    }
    ctx->pc = 0x2306C8u;
label_2306c8:
    // 0x2306c8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x2306cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2306ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2306d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2306d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2306d4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2306D4u;
    SET_GPR_U32(ctx, 31, 0x2306DCu);
    ctx->pc = 0x2306D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306D4u;
            // 0x2306d8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306DCu; }
        if (ctx->pc != 0x2306DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306DCu; }
        if (ctx->pc != 0x2306DCu) { return; }
    }
    ctx->pc = 0x2306DCu;
label_2306dc:
    // 0x2306dc: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x2306dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2306e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2306E0u;
    SET_GPR_U32(ctx, 31, 0x2306E8u);
    ctx->pc = 0x2306E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306E0u;
            // 0x2306e4: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306E8u; }
        if (ctx->pc != 0x2306E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306E8u; }
        if (ctx->pc != 0x2306E8u) { return; }
    }
    ctx->pc = 0x2306E8u;
label_2306e8:
    // 0x2306e8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2306E8u;
    {
        const bool branch_taken_0x2306e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2306ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306E8u;
            // 0x2306ec: 0x30430007  andi        $v1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306e8) {
            ctx->pc = 0x2306FCu;
            goto label_2306fc;
        }
    }
    ctx->pc = 0x2306F0u;
    // 0x2306f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2306F0u;
    {
        const bool branch_taken_0x2306f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306F0u;
            // 0x2306f4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306f0) {
            ctx->pc = 0x230700u;
            goto label_230700;
        }
    }
    ctx->pc = 0x2306F8u;
    // 0x2306f8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2306fc:
    // 0x2306fc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2306fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_230700:
    // 0x230700: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230700u;
    {
        const bool branch_taken_0x230700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230700) {
            ctx->pc = 0x230728u;
            goto label_230728;
        }
    }
    ctx->pc = 0x230708u;
    // 0x230708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23070c: 0x0  nop
    ctx->pc = 0x23070cu;
    // NOP
    // 0x230710: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x230710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230714: 0x0  nop
    ctx->pc = 0x230714u;
    // NOP
    // 0x230718: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x230718u;
    {
        const bool branch_taken_0x230718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230718u;
            // 0x23071c: 0xe6740024  swc1        $f20, 0x24($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230718) {
            ctx->pc = 0x230744u;
            goto label_230744;
        }
    }
    ctx->pc = 0x230720u;
    // 0x230720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230720u;
    {
        const bool branch_taken_0x230720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230720u;
            // 0x230724: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230720) {
            ctx->pc = 0x230744u;
            goto label_230744;
        }
    }
    ctx->pc = 0x230728u;
label_230728:
    // 0x230728: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x230728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23072c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x23072cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x230730: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x230730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230734: 0x0  nop
    ctx->pc = 0x230734u;
    // NOP
    // 0x230738: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x230738u;
    {
        const bool branch_taken_0x230738 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230738u;
            // 0x23073c: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230738) {
            ctx->pc = 0x230744u;
            goto label_230744;
        }
    }
    ctx->pc = 0x230740u;
    // 0x230740: 0xe6610024  swc1        $f1, 0x24($s3)
    ctx->pc = 0x230740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_230744:
    // 0x230744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230748: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x230748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23074c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23074cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230750: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x230750u;
    {
        const bool branch_taken_0x230750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x230754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230750u;
            // 0x230754: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230750) {
            ctx->pc = 0x230770u;
            goto label_230770;
        }
    }
    ctx->pc = 0x230758u;
    // 0x230758: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23075c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23075Cu;
    {
        const bool branch_taken_0x23075c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23075Cu;
            // 0x230760: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23075c) {
            ctx->pc = 0x23076Cu;
            goto label_23076c;
        }
    }
    ctx->pc = 0x230764u;
    // 0x230764: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230764u;
    {
        const bool branch_taken_0x230764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230764) {
            ctx->pc = 0x230778u;
            goto label_230778;
        }
    }
    ctx->pc = 0x23076Cu;
label_23076c:
    // 0x23076c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_230770:
    // 0x230770: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x230770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x230774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x230774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_230778:
    // 0x230778: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x230778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23077c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x23077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x230780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230784: 0x0  nop
    ctx->pc = 0x230784u;
    // NOP
    // 0x230788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23078c: 0x0  nop
    ctx->pc = 0x23078cu;
    // NOP
    // 0x230790: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x230790u;
    {
        const bool branch_taken_0x230790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230790u;
            // 0x230794: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230790) {
            ctx->pc = 0x23081Cu;
            goto label_23081c;
        }
    }
    ctx->pc = 0x230798u;
    // 0x230798: 0x3c02402c  lui         $v0, 0x402C
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16428 << 16));
    // 0x23079c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2307a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2307a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2307a4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2307A4u;
    SET_GPR_U32(ctx, 31, 0x2307ACu);
    ctx->pc = 0x2307A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2307A4u;
            // 0x2307a8: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307ACu; }
        if (ctx->pc != 0x2307ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307ACu; }
        if (ctx->pc != 0x2307ACu) { return; }
    }
    ctx->pc = 0x2307ACu;
label_2307ac:
    // 0x2307ac: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2307b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2307b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2307b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2307b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2307b8: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2307B8u;
    SET_GPR_U32(ctx, 31, 0x2307C0u);
    ctx->pc = 0x2307BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2307B8u;
            // 0x2307bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307C0u; }
        if (ctx->pc != 0x2307C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307C0u; }
        if (ctx->pc != 0x2307C0u) { return; }
    }
    ctx->pc = 0x2307C0u;
label_2307c0:
    // 0x2307c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2307c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2307c4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2307c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2307c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2307c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2307cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2307ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2307d0: 0x0  nop
    ctx->pc = 0x2307d0u;
    // NOP
    // 0x2307d4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2307d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2307d8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2307dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2307dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2307e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2307e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2307e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2307e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2307e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2307e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2307ec: 0xc0941c0  jal         func_250700
    ctx->pc = 0x2307ECu;
    SET_GPR_U32(ctx, 31, 0x2307F4u);
    ctx->pc = 0x2307F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2307ECu;
            // 0x2307f0: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307F4u; }
        if (ctx->pc != 0x2307F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2307F4u; }
        if (ctx->pc != 0x2307F4u) { return; }
    }
    ctx->pc = 0x2307F4u;
label_2307f4:
    // 0x2307f4: 0x86830016  lh          $v1, 0x16($s4)
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x2307f8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2307f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2307fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2307fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230800: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230804: 0x0  nop
    ctx->pc = 0x230804u;
    // NOP
    // 0x230808: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23080c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x23080cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x230810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230814: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x230814u;
    {
        const bool branch_taken_0x230814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230814u;
            // 0x230818: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230814) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x23081Cu;
label_23081c:
    // 0x23081c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23081cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230820: 0xc0941c0  jal         func_250700
    ctx->pc = 0x230820u;
    SET_GPR_U32(ctx, 31, 0x230828u);
    ctx->pc = 0x230824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230820u;
            // 0x230824: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230828u; }
        if (ctx->pc != 0x230828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230828u; }
        if (ctx->pc != 0x230828u) { return; }
    }
    ctx->pc = 0x230828u;
label_230828:
    // 0x230828: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x23082c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x230830: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230834: 0xc0941c0  jal         func_250700
    ctx->pc = 0x230834u;
    SET_GPR_U32(ctx, 31, 0x23083Cu);
    ctx->pc = 0x230838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230834u;
            // 0x230838: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23083Cu; }
        if (ctx->pc != 0x23083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23083Cu; }
        if (ctx->pc != 0x23083Cu) { return; }
    }
    ctx->pc = 0x23083Cu;
label_23083c:
    // 0x23083c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23083cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x230840: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x230844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23084c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23084cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230850: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x230850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x230854: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x230854u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x230858: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23085c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x23085Cu;
    SET_GPR_U32(ctx, 31, 0x230864u);
    ctx->pc = 0x230860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23085Cu;
            // 0x230860: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230864u; }
        if (ctx->pc != 0x230864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230864u; }
        if (ctx->pc != 0x230864u) { return; }
    }
    ctx->pc = 0x230864u;
label_230864:
    // 0x230864: 0x86830016  lh          $v1, 0x16($s4)
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x230868: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x23086c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23086cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230870: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230874: 0x0  nop
    ctx->pc = 0x230874u;
    // NOP
    // 0x230878: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x230878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23087c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x23087cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x230880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230884: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x230884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_230888:
    // 0x230888: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
    // 0x23088c: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x23088cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x230890: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x230890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x230894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230898: 0xc0941c0  jal         func_250700
    ctx->pc = 0x230898u;
    SET_GPR_U32(ctx, 31, 0x2308A0u);
    ctx->pc = 0x23089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230898u;
            // 0x23089c: 0xae60002c  sw          $zero, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308A0u; }
        if (ctx->pc != 0x2308A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308A0u; }
        if (ctx->pc != 0x2308A0u) { return; }
    }
    ctx->pc = 0x2308A0u;
label_2308a0:
    // 0x2308a0: 0x3c043f28  lui         $a0, 0x3F28
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16168 << 16));
    // 0x2308a4: 0x3c03430a  lui         $v1, 0x430A
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17162 << 16));
    // 0x2308a8: 0x3484f5c3  ori         $a0, $a0, 0xF5C3
    ctx->pc = 0x2308a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62915);
    // 0x2308ac: 0x2a410030  slti        $at, $s2, 0x30
    ctx->pc = 0x2308acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2308b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2308b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2308b4: 0x0  nop
    ctx->pc = 0x2308b4u;
    // NOP
    // 0x2308b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2308b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2308bc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2308bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2308c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2308C0u;
    {
        const bool branch_taken_0x2308c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308C0u;
            // 0x2308c4: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308c0) {
            ctx->pc = 0x2308D0u;
            goto label_2308d0;
        }
    }
    ctx->pc = 0x2308C8u;
    // 0x2308c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2308C8u;
    {
        const bool branch_taken_0x2308c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308C8u;
            // 0x2308cc: 0xae600034  sw          $zero, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308c8) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2308D0u;
label_2308d0:
    // 0x2308d0: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2308d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2308d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2308D4u;
    {
        const bool branch_taken_0x2308d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2308D4u;
            // 0x2308d8: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308d4) {
            ctx->pc = 0x230930u;
            goto label_230930;
        }
    }
    ctx->pc = 0x2308DCu;
label_2308dc:
    // 0x2308dc: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2308DCu;
    SET_GPR_U32(ctx, 31, 0x2308E4u);
    ctx->pc = 0x2308E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308DCu;
            // 0x2308e0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308E4u; }
        if (ctx->pc != 0x2308E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308E4u; }
        if (ctx->pc != 0x2308E4u) { return; }
    }
    ctx->pc = 0x2308E4u;
label_2308e4:
    // 0x2308e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2308e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2308ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2308ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2308f0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2308f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2308f4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2308F4u;
    SET_GPR_U32(ctx, 31, 0x2308FCu);
    ctx->pc = 0x2308F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308F4u;
            // 0x2308f8: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    }
    ctx->pc = 0x2308FCu;
label_2308fc:
    // 0x2308fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2308fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x230900: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230908: 0x0  nop
    ctx->pc = 0x230908u;
    // NOP
    // 0x23090c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23090cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230910: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x230910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x230914: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x230914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x230918: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x230918u;
    SET_GPR_U32(ctx, 31, 0x230920u);
    ctx->pc = 0x23091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230918u;
            // 0x23091c: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230920u; }
        if (ctx->pc != 0x230920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230920u; }
        if (ctx->pc != 0x230920u) { return; }
    }
    ctx->pc = 0x230920u;
label_230920:
    // 0x230920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230924: 0x0  nop
    ctx->pc = 0x230924u;
    // NOP
    // 0x230928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23092c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x23092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_230930:
    // 0x230930: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x230930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_230934:
    // 0x230934: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x230934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230938: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x230938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23093c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23093cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230940: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x230940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x230944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230948: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23094c: 0x3e00008  jr          $ra
    ctx->pc = 0x23094Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23094Cu;
            // 0x230950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230954u;
}
