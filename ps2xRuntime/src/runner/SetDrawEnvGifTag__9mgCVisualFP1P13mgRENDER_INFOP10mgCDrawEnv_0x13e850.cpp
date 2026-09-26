#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDrawEnvGifTag__9mgCVisualFP1P13mgRENDER_INFOP10mgCDrawEnv
// Address: 0x13e850 - 0x13eab8
void SetDrawEnvGifTag__9mgCVisualFP1P13mgRENDER_INFOP10mgCDrawEnv_0x13e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDrawEnvGifTag__9mgCVisualFP1P13mgRENDER_INFOP10mgCDrawEnv_0x13e850");
#endif

    switch (ctx->pc) {
        case 0x13e874u: goto label_13e874;
        case 0x13ea90u: goto label_13ea90;
        case 0x13eaa0u: goto label_13eaa0;
        default: break;
    }

    ctx->pc = 0x13e850u;

    // 0x13e850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e860: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13e860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e868: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x13e868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e86c: 0xc04e220  jal         func_138880
    ctx->pc = 0x13E86Cu;
    SET_GPR_U32(ctx, 31, 0x13E874u);
    ctx->pc = 0x13E870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E86Cu;
            // 0x13e870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E874u; }
        if (ctx->pc != 0x13E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E874u; }
        if (ctx->pc != 0x13E874u) { return; }
    }
    ctx->pc = 0x13E874u;
label_13e874:
    // 0x13e874: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e87c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E87Cu;
    {
        const bool branch_taken_0x13e87c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13e87c) {
            ctx->pc = 0x13E8A0u;
            goto label_13e8a0;
        }
    }
    ctx->pc = 0x13E884u;
    // 0x13e884: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x13e884u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e88c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e890: 0x2402f00f  addiu       $v0, $zero, -0xFF1
    ctx->pc = 0x13e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x13e894: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e898: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e89c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x13e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_13e8a0:
    // 0x13e8a0: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e8a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13e8a8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13E8A8u;
    {
        const bool branch_taken_0x13e8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e8a8) {
            ctx->pc = 0x13E950u;
            goto label_13e950;
        }
    }
    ctx->pc = 0x13E8B0u;
    // 0x13e8b0: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x13e8b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e8b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13e8b8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e8b8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e8bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e8c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13e8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13e8c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13e8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e8c8: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x13e8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e8cc: 0x8e230fcc  lw          $v1, 0xFCC($s1)
    ctx->pc = 0x13e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e8d0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13e8d4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E8D4u;
    {
        const bool branch_taken_0x13e8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8D4u;
            // 0x13e8d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8d4) {
            ctx->pc = 0x13E8F8u;
            goto label_13e8f8;
        }
    }
    ctx->pc = 0x13E8DCu;
    // 0x13e8dc: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x13e8dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e8e0: 0x30c20003  andi        $v0, $a2, 0x3
    ctx->pc = 0x13e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x13e8e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x13e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x13e8e8: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x13e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13e8ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e8f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e8f4: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x13e8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_13e8f8:
    // 0x13e8f8: 0x8e230fcc  lw          $v1, 0xFCC($s1)
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e900: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13e904: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E904u;
    {
        const bool branch_taken_0x13e904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e904) {
            ctx->pc = 0x13E924u;
            goto label_13e924;
        }
    }
    ctx->pc = 0x13E90Cu;
    // 0x13e90c: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x13e90cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e910: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x13e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13e914: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x13e914u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13e918: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e91c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e920: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x13e920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_13e924:
    // 0x13e924: 0x8e230fcc  lw          $v1, 0xFCC($s1)
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e92c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13e930: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E930u;
    {
        const bool branch_taken_0x13e930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e930) {
            ctx->pc = 0x13E950u;
            goto label_13e950;
        }
    }
    ctx->pc = 0x13E938u;
    // 0x13e938: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x13e938u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e93c: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x13e940: 0x64030006  daddiu      $v1, $zero, 0x6
    ctx->pc = 0x13e940u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x13e944: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e948: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e94c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x13e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_13e950:
    // 0x13e950: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e954: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x13e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13e958: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E958u;
    {
        const bool branch_taken_0x13e958 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13E95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E958u;
            // 0x13e95c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e958) {
            ctx->pc = 0x13E9A0u;
            goto label_13e9a0;
        }
    }
    ctx->pc = 0x13E960u;
    // 0x13e960: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x13e960u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e964: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13e968: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e968u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e96c: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x13e970: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13e974: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13e974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e978: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x13e978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e97c: 0x8e240fcc  lw          $a0, 0xFCC($s1)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e980: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x13e980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e984: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13e988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e98c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x13e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x13e990: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13e994: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e998: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13E998u;
    {
        const bool branch_taken_0x13e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E998u;
            // 0x13e99c: 0xa2020010  sb          $v0, 0x10($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e998) {
            ctx->pc = 0x13E9C0u;
            goto label_13e9c0;
        }
    }
    ctx->pc = 0x13E9A0u;
label_13e9a0:
    // 0x13e9a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E9A0u;
    {
        const bool branch_taken_0x13e9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e9a0) {
            ctx->pc = 0x13E9C0u;
            goto label_13e9c0;
        }
    }
    ctx->pc = 0x13E9A8u;
    // 0x13e9a8: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x13e9a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e9ac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13e9b0: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x13e9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x13e9b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e9bc: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x13e9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
label_13e9c0:
    // 0x13e9c0: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13e9c4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x13e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13e9c8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13E9C8u;
    {
        const bool branch_taken_0x13e9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9C8u;
            // 0x13e9cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9c8) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13E9D0u;
    // 0x13e9d0: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E9D0u;
    {
        const bool branch_taken_0x13e9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9D0u;
            // 0x13e9d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9d0) {
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E9D8u;
    // 0x13e9d8: 0x92040011  lbu         $a0, 0x11($s0)
    ctx->pc = 0x13e9d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x13e9dc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x13e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x13e9e0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x13e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13e9e4: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x13e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13e9e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13e9ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e9f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13E9F0u;
    {
        const bool branch_taken_0x13e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9F0u;
            // 0x13e9f4: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9f0) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13E9F8u;
label_13e9f8:
    // 0x13e9f8: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13E9F8u;
    {
        const bool branch_taken_0x13e9f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9F8u;
            // 0x13e9fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9f8) {
            ctx->pc = 0x13EA3Cu;
            goto label_13ea3c;
        }
    }
    ctx->pc = 0x13EA00u;
    // 0x13ea00: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x13ea00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x13ea04: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ea08: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x13ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13ea0c: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x13ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13ea10: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x13ea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x13ea14: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x13ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13ea18: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x13ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x13ea1c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x13ea1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13ea20: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x13ea20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13ea24: 0xa2040011  sb          $a0, 0x11($s0)
    ctx->pc = 0x13ea24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x13ea28: 0x92040011  lbu         $a0, 0x11($s0)
    ctx->pc = 0x13ea28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x13ea2c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ea30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ea34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13EA34u;
    {
        const bool branch_taken_0x13ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA34u;
            // 0x13ea38: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea34) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13EA3Cu;
label_13ea3c:
    // 0x13ea3c: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13EA3Cu;
    {
        const bool branch_taken_0x13ea3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ea3c) {
            ctx->pc = 0x13EA78u;
            goto label_13ea78;
        }
    }
    ctx->pc = 0x13EA44u;
    // 0x13ea44: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x13ea44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x13ea48: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13ea48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13ea4c: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13ea50: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13ea54: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x13ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x13ea58: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x13ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13ea5c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x13ea5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13ea60: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x13ea60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13ea64: 0xa2040011  sb          $a0, 0x11($s0)
    ctx->pc = 0x13ea64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x13ea68: 0x92040011  lbu         $a0, 0x11($s0)
    ctx->pc = 0x13ea68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x13ea6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ea70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ea70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ea74: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x13ea74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_13ea78:
    // 0x13ea78: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13ea7c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ea80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EA80u;
    {
        const bool branch_taken_0x13ea80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA80u;
            // 0x13ea84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea80) {
            ctx->pc = 0x13EA90u;
            goto label_13ea90;
        }
    }
    ctx->pc = 0x13EA88u;
    // 0x13ea88: 0xc04e25c  jal         func_138970
    ctx->pc = 0x13EA88u;
    SET_GPR_U32(ctx, 31, 0x13EA90u);
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA90u; }
        if (ctx->pc != 0x13EA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA90u; }
        if (ctx->pc != 0x13EA90u) { return; }
    }
    ctx->pc = 0x13EA90u;
label_13ea90:
    // 0x13ea90: 0x8e220fcc  lw          $v0, 0xFCC($s1)
    ctx->pc = 0x13ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4044)));
    // 0x13ea94: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13ea98: 0xc04e290  jal         func_138A40
    ctx->pc = 0x13EA98u;
    SET_GPR_U32(ctx, 31, 0x13EAA0u);
    ctx->pc = 0x13EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA98u;
            // 0x13ea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAA0u; }
        if (ctx->pc != 0x13EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAA0u; }
        if (ctx->pc != 0x13EAA0u) { return; }
    }
    ctx->pc = 0x13EAA0u;
label_13eaa0:
    // 0x13eaa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13eaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eaa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13eaa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13eaa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eaac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eab0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAB0u;
            // 0x13eab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EAB8u;
}
