#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPlaceData__9CEditDataFv
// Address: 0x2a8a10 - 0x2a8b38
void InitPlaceData__9CEditDataFv_0x2a8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPlaceData__9CEditDataFv_0x2a8a10");
#endif

    switch (ctx->pc) {
        case 0x2a8a40u: goto label_2a8a40;
        case 0x2a8a54u: goto label_2a8a54;
        case 0x2a8a80u: goto label_2a8a80;
        case 0x2a8a94u: goto label_2a8a94;
        case 0x2a8ab8u: goto label_2a8ab8;
        case 0x2a8af0u: goto label_2a8af0;
        default: break;
    }

    ctx->pc = 0x2a8a10u;

    // 0x2a8a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8a14: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2a8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2a8a18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a8a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a8a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8a24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a8a2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a30: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a8a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8A38u;
    {
        const bool branch_taken_0x2a8a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A38u;
            // 0x2a8a3c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a38) {
            ctx->pc = 0x2A8A5Cu;
            goto label_2a8a5c;
        }
    }
    ctx->pc = 0x2A8A40u;
label_2a8a40:
    // 0x2a8a40: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a8a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a48: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2a8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2a8a4c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A8A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A8A54u);
    ctx->pc = 0x2A8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A4Cu;
            // 0x2a8a50: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A54u; }
        if (ctx->pc != 0x2A8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A54u; }
        if (ctx->pc != 0x2A8A54u) { return; }
    }
    ctx->pc = 0x2A8A54u;
label_2a8a54:
    // 0x2a8a54: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x2a8a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8a5c:
    // 0x2a8a5c: 0x0  nop
    ctx->pc = 0x2a8a5cu;
    // NOP
    // 0x2a8a60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a8a64: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2a8a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a8a68: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8A68u;
    {
        const bool branch_taken_0x2a8a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A68u;
            // 0x2a8a6c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a68) {
            ctx->pc = 0x2A8A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8a40;
        }
    }
    ctx->pc = 0x2A8A70u;
    // 0x2a8a70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a8a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a74: 0xae032a3c  sw          $v1, 0x2A3C($s0)
    ctx->pc = 0x2a8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10812), GPR_U32(ctx, 3));
    // 0x2a8a78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8A78u;
    {
        const bool branch_taken_0x2a8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A78u;
            // 0x2a8a7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a78) {
            ctx->pc = 0x2A8A9Cu;
            goto label_2a8a9c;
        }
    }
    ctx->pc = 0x2A8A80u;
label_2a8a80:
    // 0x2a8a80: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2a8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2a8a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a88: 0x24442a40  addiu       $a0, $v0, 0x2A40
    ctx->pc = 0x2a8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
    // 0x2a8a8c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2A8A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A8A94u);
    ctx->pc = 0x2A8A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A8Cu;
            // 0x2a8a90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A94u; }
        if (ctx->pc != 0x2A8A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A94u; }
        if (ctx->pc != 0x2A8A94u) { return; }
    }
    ctx->pc = 0x2A8A94u;
label_2a8a94:
    // 0x2a8a94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2a8a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2a8a98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a8a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a8a9c:
    // 0x2a8a9c: 0x0  nop
    ctx->pc = 0x2a8a9cu;
    // NOP
    // 0x2a8aa0: 0x8e032a3c  lw          $v1, 0x2A3C($s0)
    ctx->pc = 0x2a8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10812)));
    // 0x2a8aa4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a8aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a8aa8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8AA8u;
    {
        const bool branch_taken_0x2a8aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AA8u;
            // 0x2a8aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aa8) {
            ctx->pc = 0x2A8A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8a80;
        }
    }
    ctx->pc = 0x2A8AB0u;
    // 0x2a8ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ab4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8ab8:
    // 0x2a8ab8: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x2a8ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a8abc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2a8ac0: 0xa4c42c40  sh          $a0, 0x2C40($a2)
    ctx->pc = 0x2a8ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11328), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8ac4: 0x28e30800  slti        $v1, $a3, 0x800
    ctx->pc = 0x2a8ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2a8ac8: 0xa4c42c44  sh          $a0, 0x2C44($a2)
    ctx->pc = 0x2a8ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11332), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8acc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a8accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2a8ad0: 0xa4c42c48  sh          $a0, 0x2C48($a2)
    ctx->pc = 0x2a8ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11336), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8ad4: 0xa4c42c4c  sh          $a0, 0x2C4C($a2)
    ctx->pc = 0x2a8ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11340), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8ad8: 0xa4c42c50  sh          $a0, 0x2C50($a2)
    ctx->pc = 0x2a8ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11344), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8adc: 0xa4c42c54  sh          $a0, 0x2C54($a2)
    ctx->pc = 0x2a8adcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11348), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8ae0: 0xa4c42c58  sh          $a0, 0x2C58($a2)
    ctx->pc = 0x2a8ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11352), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a8ae4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A8AE4u;
    {
        const bool branch_taken_0x2a8ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AE4u;
            // 0x2a8ae8: 0xa4c42c5c  sh          $a0, 0x2C5C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 11356), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ae4) {
            ctx->pc = 0x2A8AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8ab8;
        }
    }
    ctx->pc = 0x2A8AECu;
    // 0x2a8aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8af0:
    // 0x2a8af0: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2a8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a8af4: 0xa0804c40  sb          $zero, 0x4C40($a0)
    ctx->pc = 0x2a8af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19520), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8af8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a8af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2a8afc: 0xa0804c41  sb          $zero, 0x4C41($a0)
    ctx->pc = 0x2a8afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19521), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b00: 0x28a30400  slti        $v1, $a1, 0x400
    ctx->pc = 0x2a8b00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2a8b04: 0xa0804c42  sb          $zero, 0x4C42($a0)
    ctx->pc = 0x2a8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19522), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b08: 0xa0804c43  sb          $zero, 0x4C43($a0)
    ctx->pc = 0x2a8b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19523), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b0c: 0xa0804c44  sb          $zero, 0x4C44($a0)
    ctx->pc = 0x2a8b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19524), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b10: 0xa0804c45  sb          $zero, 0x4C45($a0)
    ctx->pc = 0x2a8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19525), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b14: 0xa0804c46  sb          $zero, 0x4C46($a0)
    ctx->pc = 0x2a8b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19526), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b18: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8B18u;
    {
        const bool branch_taken_0x2a8b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B18u;
            // 0x2a8b1c: 0xa0804c47  sb          $zero, 0x4C47($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19527), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b18) {
            ctx->pc = 0x2A8AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8af0;
        }
    }
    ctx->pc = 0x2A8B20u;
    // 0x2a8b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a8b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a8b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B30u;
            // 0x2a8b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B38u;
}
