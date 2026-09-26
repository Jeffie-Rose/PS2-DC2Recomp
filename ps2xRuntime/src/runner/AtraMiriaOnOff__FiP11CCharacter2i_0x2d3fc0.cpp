#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AtraMiriaOnOff__FiP11CCharacter2i
// Address: 0x2d3fc0 - 0x2d4130
void AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AtraMiriaOnOff__FiP11CCharacter2i_0x2d3fc0");
#endif

    switch (ctx->pc) {
        case 0x2d4008u: goto label_2d4008;
        case 0x2d401cu: goto label_2d401c;
        case 0x2d4094u: goto label_2d4094;
        case 0x2d40e0u: goto label_2d40e0;
        default: break;
    }

    ctx->pc = 0x2d3fc0u;

    // 0x2d3fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d3fc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d3fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3fd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d3fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3fdc: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D3FDCu;
    {
        const bool branch_taken_0x2d3fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3FDCu;
            // 0x2d3fe0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fdc) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D3FE4u;
    // 0x2d3fe4: 0x8cb00070  lw          $s0, 0x70($a1)
    ctx->pc = 0x2d3fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2d3fe8: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D3FE8u;
    {
        const bool branch_taken_0x2d3fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3fe8) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D3FF0u;
    // 0x2d3ff0: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3FF0u;
    {
        const bool branch_taken_0x2d3ff0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3FF0u;
            // 0x2d3ff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ff0) {
            ctx->pc = 0x2D407Cu;
            goto label_2d407c;
        }
    }
    ctx->pc = 0x2D3FF8u;
    // 0x2d3ff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4000: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2D4000u;
    SET_GPR_U32(ctx, 31, 0x2D4008u);
    ctx->pc = 0x2D4004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4000u;
            // 0x2d4004: 0x24a506a8  addiu       $a1, $a1, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4008u; }
        if (ctx->pc != 0x2D4008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4008u; }
        if (ctx->pc != 0x2D4008u) { return; }
    }
    ctx->pc = 0x2D4008u;
label_2d4008:
    // 0x2d4008: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d4008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d400c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d400cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4014: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2D4014u;
    SET_GPR_U32(ctx, 31, 0x2D401Cu);
    ctx->pc = 0x2D4018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4014u;
            // 0x2d4018: 0x24a506b8  addiu       $a1, $a1, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D401Cu; }
        if (ctx->pc != 0x2D401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D401Cu; }
        if (ctx->pc != 0x2D401Cu) { return; }
    }
    ctx->pc = 0x2D401Cu;
label_2d401c:
    // 0x2d401c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D401Cu;
    {
        const bool branch_taken_0x2d401c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d401c) {
            ctx->pc = 0x2D4050u;
            goto label_2d4050;
        }
    }
    ctx->pc = 0x2D4024u;
    // 0x2d4024: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4024u;
    {
        const bool branch_taken_0x2d4024 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4024) {
            ctx->pc = 0x2D4038u;
            goto label_2d4038;
        }
    }
    ctx->pc = 0x2D402Cu;
    // 0x2d402c: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2d402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x2d4030: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d4030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4034: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d4034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2d4038:
    // 0x2d4038: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4038u;
    {
        const bool branch_taken_0x2d4038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4038) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D4040u;
    // 0x2d4040: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d4044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D4048u;
    {
        const bool branch_taken_0x2d4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4048u;
            // 0x2d404c: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4048) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D4050u;
label_2d4050:
    // 0x2d4050: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4050u;
    {
        const bool branch_taken_0x2d4050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4050) {
            ctx->pc = 0x2D4064u;
            goto label_2d4064;
        }
    }
    ctx->pc = 0x2D4058u;
    // 0x2d4058: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2d4058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x2d405c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4060: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d4060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2d4064:
    // 0x2d4064: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4064u;
    {
        const bool branch_taken_0x2d4064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4064) {
            ctx->pc = 0x2D4078u;
            goto label_2d4078;
        }
    }
    ctx->pc = 0x2D406Cu;
    // 0x2d406c: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d4070: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4074: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d4074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2d4078:
    // 0x2d4078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d407c:
    // 0x2d407c: 0x16430013  bne         $s2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D407Cu;
    {
        const bool branch_taken_0x2d407c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D4080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D407Cu;
            // 0x2d4080: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d407c) {
            ctx->pc = 0x2D40CCu;
            goto label_2d40cc;
        }
    }
    ctx->pc = 0x2D4084u;
    // 0x2d4084: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d4084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d4088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d408c: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2D408Cu;
    SET_GPR_U32(ctx, 31, 0x2D4094u);
    ctx->pc = 0x2D4090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D408Cu;
            // 0x2d4090: 0x24a506a8  addiu       $a1, $a1, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4094u; }
        if (ctx->pc != 0x2D4094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4094u; }
        if (ctx->pc != 0x2D4094u) { return; }
    }
    ctx->pc = 0x2D4094u;
label_2d4094:
    // 0x2d4094: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4094u;
    {
        const bool branch_taken_0x2d4094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4094) {
            ctx->pc = 0x2D40B4u;
            goto label_2d40b4;
        }
    }
    ctx->pc = 0x2D409Cu;
    // 0x2d409c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D409Cu;
    {
        const bool branch_taken_0x2d409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d409c) {
            ctx->pc = 0x2D40C8u;
            goto label_2d40c8;
        }
    }
    ctx->pc = 0x2D40A4u;
    // 0x2d40a4: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d40a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d40a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d40ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D40ACu;
    {
        const bool branch_taken_0x2d40ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D40ACu;
            // 0x2d40b0: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40ac) {
            ctx->pc = 0x2D40C8u;
            goto label_2d40c8;
        }
    }
    ctx->pc = 0x2D40B4u;
label_2d40b4:
    // 0x2d40b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D40B4u;
    {
        const bool branch_taken_0x2d40b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40b4) {
            ctx->pc = 0x2D40C8u;
            goto label_2d40c8;
        }
    }
    ctx->pc = 0x2D40BCu;
    // 0x2d40bc: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d40c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d40c4: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d40c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2d40c8:
    // 0x2d40c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d40cc:
    // 0x2d40cc: 0x16430011  bne         $s2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D40CCu;
    {
        const bool branch_taken_0x2d40cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D40D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D40CCu;
            // 0x2d40d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40cc) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D40D4u;
    // 0x2d40d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d40d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40d8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2D40D8u;
    SET_GPR_U32(ctx, 31, 0x2D40E0u);
    ctx->pc = 0x2D40DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D40D8u;
            // 0x2d40dc: 0x24a506c0  addiu       $a1, $a1, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D40E0u; }
        if (ctx->pc != 0x2D40E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D40E0u; }
        if (ctx->pc != 0x2D40E0u) { return; }
    }
    ctx->pc = 0x2D40E0u;
label_2d40e0:
    // 0x2d40e0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D40E0u;
    {
        const bool branch_taken_0x2d40e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40e0) {
            ctx->pc = 0x2D4100u;
            goto label_2d4100;
        }
    }
    ctx->pc = 0x2D40E8u;
    // 0x2d40e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D40E8u;
    {
        const bool branch_taken_0x2d40e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d40e8) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D40F0u;
    // 0x2d40f0: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d40f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d40f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D40F8u;
    {
        const bool branch_taken_0x2d40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D40F8u;
            // 0x2d40fc: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40f8) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D4100u;
label_2d4100:
    // 0x2d4100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4100u;
    {
        const bool branch_taken_0x2d4100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4100) {
            ctx->pc = 0x2D4114u;
            goto label_2d4114;
        }
    }
    ctx->pc = 0x2D4108u;
    // 0x2d4108: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2d4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d410c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4110: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2d4110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2d4114:
    // 0x2d4114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d4118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d411c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d411cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4128: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4128u;
            // 0x2d412c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4130u;
}
