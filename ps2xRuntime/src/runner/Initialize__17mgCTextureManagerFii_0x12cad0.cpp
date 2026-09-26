#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__17mgCTextureManagerFii
// Address: 0x12cad0 - 0x12cc64
void Initialize__17mgCTextureManagerFii_0x12cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__17mgCTextureManagerFii_0x12cad0");
#endif

    switch (ctx->pc) {
        case 0x12cb18u: goto label_12cb18;
        case 0x12cb2cu: goto label_12cb2c;
        case 0x12cb4cu: goto label_12cb4c;
        case 0x12cb58u: goto label_12cb58;
        case 0x12cba0u: goto label_12cba0;
        case 0x12cbf0u: goto label_12cbf0;
        case 0x12cc18u: goto label_12cc18;
        default: break;
    }

    ctx->pc = 0x12cad0u;

    // 0x12cad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12cad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12cae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cae4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12cae8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x12cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x12caec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12caf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CAF0u;
    {
        const bool branch_taken_0x12caf0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12caf0) {
            ctx->pc = 0x12CB00u;
            goto label_12cb00;
        }
    }
    ctx->pc = 0x12CAF8u;
    // 0x12caf8: 0x24033fe0  addiu       $v1, $zero, 0x3FE0
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16352));
    // 0x12cafc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_12cb00:
    // 0x12cb00: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12cb04: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x12CB04u;
    {
        const bool branch_taken_0x12cb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb04) {
            ctx->pc = 0x12CC4Cu;
            goto label_12cc4c;
        }
    }
    ctx->pc = 0x12CB0Cu;
    // 0x12cb0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12cb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12CB10u;
    {
        const bool branch_taken_0x12cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb10) {
            ctx->pc = 0x12CB30u;
            goto label_12cb30;
        }
    }
    ctx->pc = 0x12CB18u;
label_12cb18:
    // 0x12cb18: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12cb1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12cb20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cb24: 0xc04b1c0  jal         func_12C700
    ctx->pc = 0x12CB24u;
    SET_GPR_U32(ctx, 31, 0x12CB2Cu);
    ctx->pc = 0x12C700u;
    if (runtime->hasFunction(0x12C700u)) {
        auto targetFn = runtime->lookupFunction(0x12C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB2Cu; }
        if (ctx->pc != 0x12CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTextureBlockFv_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB2Cu; }
        if (ctx->pc != 0x12CB2Cu) { return; }
    }
    ctx->pc = 0x12CB2Cu;
label_12cb2c:
    // 0x12cb2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12cb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12cb30:
    // 0x12cb30: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x12cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12cb34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x12cb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12cb38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12CB38u;
    {
        const bool branch_taken_0x12cb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb38) {
            ctx->pc = 0x12CB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cb18;
        }
    }
    ctx->pc = 0x12CB40u;
    // 0x12cb40: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12cb44: 0xc04b1c0  jal         func_12C700
    ctx->pc = 0x12CB44u;
    SET_GPR_U32(ctx, 31, 0x12CB4Cu);
    ctx->pc = 0x12C700u;
    if (runtime->hasFunction(0x12C700u)) {
        auto targetFn = runtime->lookupFunction(0x12C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB4Cu; }
        if (ctx->pc != 0x12CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTextureBlockFv_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB4Cu; }
        if (ctx->pc != 0x12CB4Cu) { return; }
    }
    ctx->pc = 0x12CB4Cu;
label_12cb4c:
    // 0x12cb4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CB50u;
    {
        const bool branch_taken_0x12cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb50) {
            ctx->pc = 0x12CB80u;
            goto label_12cb80;
        }
    }
    ctx->pc = 0x12CB58u;
label_12cb58:
    // 0x12cb58: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x12cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12cb5c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x12cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12cb60: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x12cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12cb64: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x12cb68: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12cb6c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12cb70: 0x8e2301bc  lw          $v1, 0x1BC($s1)
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x12cb74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12cb78: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12cb7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12cb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12cb80:
    // 0x12cb80: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x12cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x12cb84: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12cb88: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12CB88u;
    {
        const bool branch_taken_0x12cb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb88) {
            ctx->pc = 0x12CB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cb58;
        }
    }
    ctx->pc = 0x12CB90u;
    // 0x12cb90: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x12cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x12cb94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12cb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CB98u;
    {
        const bool branch_taken_0x12cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb98) {
            ctx->pc = 0x12CBC8u;
            goto label_12cbc8;
        }
    }
    ctx->pc = 0x12CBA0u;
label_12cba0:
    // 0x12cba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cba4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12cba8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12cbac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12cbb0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x12cbb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12cbb8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12cbbc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12cbc0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x12cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12cbc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12cbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12cbc8:
    // 0x12cbc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12cbcc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x12cbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12cbd0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12CBD0u;
    {
        const bool branch_taken_0x12cbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cbd0) {
            ctx->pc = 0x12CBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cba0;
        }
    }
    ctx->pc = 0x12CBD8u;
    // 0x12cbd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cbdc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x12cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x12cbe0: 0xa22001d8  sb          $zero, 0x1D8($s1)
    ctx->pc = 0x12cbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cbe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CBE8u;
    {
        const bool branch_taken_0x12cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cbe8) {
            ctx->pc = 0x12CC00u;
            goto label_12cc00;
        }
    }
    ctx->pc = 0x12CBF0u;
label_12cbf0:
    // 0x12cbf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12cbf4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12cbf8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x12cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x12cbfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12cc00:
    // 0x12cc00: 0x28830065  slti        $v1, $a0, 0x65
    ctx->pc = 0x12cc00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x12cc04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12CC04u;
    {
        const bool branch_taken_0x12cc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cc04) {
            ctx->pc = 0x12CBF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cbf0;
        }
    }
    ctx->pc = 0x12CC0Cu;
    // 0x12cc0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12CC10u;
    {
        const bool branch_taken_0x12cc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc10) {
            ctx->pc = 0x12CC38u;
            goto label_12cc38;
        }
    }
    ctx->pc = 0x12CC18u;
label_12cc18:
    // 0x12cc18: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12cc1c: 0x8e2301c8  lw          $v1, 0x1C8($s1)
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x12cc20: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12cc24: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x12cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12cc28: 0x8e2301cc  lw          $v1, 0x1CC($s1)
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x12cc2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12cc30: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12cc34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_12cc38:
    // 0x12cc38: 0x8e2301d0  lw          $v1, 0x1D0($s1)
    ctx->pc = 0x12cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x12cc3c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x12cc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12cc40: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12CC40u;
    {
        const bool branch_taken_0x12cc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cc40) {
            ctx->pc = 0x12CC18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12CC48u;
    // 0x12cc48: 0xae2001d4  sw          $zero, 0x1D4($s1)
    ctx->pc = 0x12cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 0));
label_12cc4c:
    // 0x12cc4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CC64u;
}
