#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommonSetMoveItemClass__FPA4_i
// Address: 0x242b70 - 0x242f48
void CommonSetMoveItemClass__FPA4_i_0x242b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommonSetMoveItemClass__FPA4_i_0x242b70");
#endif

    switch (ctx->pc) {
        case 0x242bb4u: goto label_242bb4;
        case 0x242bbcu: goto label_242bbc;
        case 0x242bccu: goto label_242bcc;
        case 0x242da4u: goto label_242da4;
        case 0x242dacu: goto label_242dac;
        case 0x242de0u: goto label_242de0;
        case 0x242df0u: goto label_242df0;
        case 0x242e18u: goto label_242e18;
        case 0x242e28u: goto label_242e28;
        case 0x242e54u: goto label_242e54;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e7cu: goto label_242e7c;
        case 0x242eb0u: goto label_242eb0;
        case 0x242ec8u: goto label_242ec8;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f20u: goto label_242f20;
        default: break;
    }

    ctx->pc = 0x242b70u;

    // 0x242b70: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x242b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x242b74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x242b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x242b78: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x242b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x242b7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x242b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x242b80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x242b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x242b84: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x242b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x242b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x242b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x242b8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x242b8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x242b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x242b94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x242b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x242b9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x242ba4: 0xdf8296b0  ld          $v0, -0x6950($gp)
    ctx->pc = 0x242ba4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940336)));
    // 0x242ba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x242ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bac: 0xc065c24  jal         func_197090
    ctx->pc = 0x242BACu;
    SET_GPR_U32(ctx, 31, 0x242BB4u);
    ctx->pc = 0x242BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242BACu;
            // 0x242bb0: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BB4u; }
        if (ctx->pc != 0x242BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BB4u; }
        if (ctx->pc != 0x242BB4u) { return; }
    }
    ctx->pc = 0x242BB4u;
label_242bb4:
    // 0x242bb4: 0xc065c24  jal         func_197090
    ctx->pc = 0x242BB4u;
    SET_GPR_U32(ctx, 31, 0x242BBCu);
    ctx->pc = 0x242BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242BB4u;
            // 0x242bb8: 0x27a40104  addiu       $a0, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BBCu; }
        if (ctx->pc != 0x242BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BBCu; }
        if (ctx->pc != 0x242BBCu) { return; }
    }
    ctx->pc = 0x242BBCu;
label_242bbc:
    // 0x242bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x242bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x242bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x242bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x242bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242bcc:
    // 0x242bcc: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x242bd0: 0x2b32021  addu        $a0, $s5, $s3
    ctx->pc = 0x242bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x242bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242bd8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x242bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x242bdc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x242bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x242be0: 0x802821  addu        $a1, $a0, $zero
    ctx->pc = 0x242be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x242be4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x242be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x242be8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x242be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242bec: 0xa4650074  sh          $a1, 0x74($v1)
    ctx->pc = 0x242becu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 5));
    // 0x242bf0: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x242bf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x242bf4: 0xa4650076  sh          $a1, 0x76($v1)
    ctx->pc = 0x242bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 5));
    // 0x242bf8: 0x84850008  lh          $a1, 0x8($a0)
    ctx->pc = 0x242bf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x242bfc: 0xa4650078  sh          $a1, 0x78($v1)
    ctx->pc = 0x242bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 5));
    // 0x242c00: 0x8485000c  lh          $a1, 0xC($a0)
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x242c04: 0xa465007a  sh          $a1, 0x7A($v1)
    ctx->pc = 0x242c04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 122), (uint16_t)GPR_U32(ctx, 5));
    // 0x242c08: 0x84660074  lh          $a2, 0x74($v1)
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x242c0c: 0x14c0003a  bnez        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x242C0Cu;
    {
        const bool branch_taken_0x242c0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x242c0c) {
            ctx->pc = 0x242CF8u;
            goto label_242cf8;
        }
    }
    ctx->pc = 0x242C14u;
    // 0x242c14: 0x84660076  lh          $a2, 0x76($v1)
    ctx->pc = 0x242c14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x242c18: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x242c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x242c1c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x242C1Cu;
    {
        const bool branch_taken_0x242c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c1c) {
            ctx->pc = 0x242CC0u;
            goto label_242cc0;
        }
    }
    ctx->pc = 0x242C24u;
    // 0x242c24: 0x84650078  lh          $a1, 0x78($v1)
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x242c28: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x242C28u;
    {
        const bool branch_taken_0x242c28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x242c28) {
            ctx->pc = 0x242C74u;
            goto label_242c74;
        }
    }
    ctx->pc = 0x242C30u;
    // 0x242c30: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x242c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x242c34: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x242c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x242c38: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x242c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x242c3c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x242c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242c40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x242c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x242c44: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242c48: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x242c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x242c4c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x242c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x242c50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x242c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242c54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x242c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x242c58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242c5c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x242c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242c60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242c68: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x242c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x242c6c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x242C6Cu;
    {
        const bool branch_taken_0x242c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C6Cu;
            // 0x242c70: 0xac430188  sw          $v1, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c6c) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242C74u;
label_242c74:
    // 0x242c74: 0x0  nop
    ctx->pc = 0x242c74u;
    // NOP
    // 0x242c78: 0x14a2004f  bne         $a1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x242C78u;
    {
        const bool branch_taken_0x242c78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x242c78) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242C80u;
    // 0x242c80: 0x8465007a  lh          $a1, 0x7A($v1)
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x242c84: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x242c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x242c88: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242c8c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x242c90: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x242c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x242c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242c98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x242c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242c9c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x242c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x242ca0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x242ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242ca4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x242ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242ca8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x242ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242cac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242cb4: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x242cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x242cb8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x242CB8u;
    {
        const bool branch_taken_0x242cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242CB8u;
            // 0x242cbc: 0xac430188  sw          $v1, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cb8) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242CC0u;
label_242cc0:
    // 0x242cc0: 0xa4620078  sh          $v0, 0x78($v1)
    ctx->pc = 0x242cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x242cc4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x242cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x242cc8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x242cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x242ccc: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x242cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x242cd0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x242cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242cd4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x242cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x242cd8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x242cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242cdc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242ce0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x242ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242ce4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242ce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242cec: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x242cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x242cf0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x242CF0u;
    {
        const bool branch_taken_0x242cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242CF0u;
            // 0x242cf4: 0xac430188  sw          $v1, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cf0) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242CF8u;
label_242cf8:
    // 0x242cf8: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x242CF8u;
    {
        const bool branch_taken_0x242cf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x242cf8) {
            ctx->pc = 0x242D34u;
            goto label_242d34;
        }
    }
    ctx->pc = 0x242D00u;
    // 0x242d00: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x242d04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x242d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x242d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d0c: 0x8c23d8d0  lw          $v1, -0x2730($at)
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x242d10: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242d14: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x242d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x242d18: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x242d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242d1c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x242d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x242d20: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x242d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x242d24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x242d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x242d2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x242D2Cu;
    {
        const bool branch_taken_0x242d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242D2Cu;
            // 0x242d30: 0xac430188  sw          $v1, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d2c) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242D34u;
label_242d34:
    // 0x242d34: 0x0  nop
    ctx->pc = 0x242d34u;
    // NOP
    // 0x242d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x242d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242d3c: 0x14c50007  bne         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x242D3Cu;
    {
        const bool branch_taken_0x242d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x242d3c) {
            ctx->pc = 0x242D5Cu;
            goto label_242d5c;
        }
    }
    ctx->pc = 0x242D44u;
    // 0x242d44: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x242d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d4c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x242d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242d50: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x242d54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x242D54u;
    {
        const bool branch_taken_0x242d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242D54u;
            // 0x242d58: 0xac430188  sw          $v1, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d54) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242D5Cu;
label_242d5c:
    // 0x242d5c: 0x0  nop
    ctx->pc = 0x242d5cu;
    // NOP
    // 0x242d60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242d64: 0x14c50009  bne         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242D64u;
    {
        const bool branch_taken_0x242d64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x242d64) {
            ctx->pc = 0x242D8Cu;
            goto label_242d8c;
        }
    }
    ctx->pc = 0x242D6Cu;
    // 0x242d6c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x242d70: 0x29d2821  addu        $a1, $s4, $sp
    ctx->pc = 0x242d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242d74: 0x24c6de60  addiu       $a2, $a2, -0x21A0
    ctx->pc = 0x242d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958688));
    // 0x242d78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x242d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d7c: 0xaca60188  sw          $a2, 0x188($a1)
    ctx->pc = 0x242d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 392), GPR_U32(ctx, 6));
    // 0x242d80: 0xa4620074  sh          $v0, 0x74($v1)
    ctx->pc = 0x242d80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x242d84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x242D84u;
    {
        const bool branch_taken_0x242d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242D84u;
            // 0x242d88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d84) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242D8Cu;
label_242d8c:
    // 0x242d8c: 0x0  nop
    ctx->pc = 0x242d8cu;
    // NOP
    // 0x242d90: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x242d94: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242D94u;
    {
        const bool branch_taken_0x242d94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x242d94) {
            ctx->pc = 0x242DB8u;
            goto label_242db8;
        }
    }
    ctx->pc = 0x242D9Cu;
    // 0x242d9c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x242D9Cu;
    SET_GPR_U32(ctx, 31, 0x242DA4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DA4u; }
        if (ctx->pc != 0x242DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DA4u; }
        if (ctx->pc != 0x242DA4u) { return; }
    }
    ctx->pc = 0x242DA4u;
label_242da4:
    // 0x242da4: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x242DA4u;
    SET_GPR_U32(ctx, 31, 0x242DACu);
    ctx->pc = 0x242DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242DA4u;
            // 0x242da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DACu; }
        if (ctx->pc != 0x242DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DACu; }
        if (ctx->pc != 0x242DACu) { return; }
    }
    ctx->pc = 0x242DACu;
label_242dac:
    // 0x242dac: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x242dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x242db0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x242db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242db4: 0xac620188  sw          $v0, 0x188($v1)
    ctx->pc = 0x242db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 2));
label_242db8:
    // 0x242db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x242db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x242dbc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x242dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x242dc0: 0x2652007c  addiu       $s2, $s2, 0x7C
    ctx->pc = 0x242dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x242dc4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x242dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x242dc8: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x242DC8u;
    {
        const bool branch_taken_0x242dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242DC8u;
            // 0x242dcc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dc8) {
            ctx->pc = 0x242BCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242bcc;
        }
    }
    ctx->pc = 0x242DD0u;
    // 0x242dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x242dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242dd4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x242dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x242dd8: 0xc090a68  jal         func_2429A0
    ctx->pc = 0x242DD8u;
    SET_GPR_U32(ctx, 31, 0x242DE0u);
    ctx->pc = 0x242DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242DD8u;
            // 0x242ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2429A0u;
    if (runtime->hasFunction(0x2429A0u)) {
        auto targetFn = runtime->lookupFunction(0x2429A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DE0u; }
        if (ctx->pc != 0x242DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMoveItemPos__FPiPii_0x2429a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DE0u; }
        if (ctx->pc != 0x242DE0u) { return; }
    }
    ctx->pc = 0x242DE0u;
label_242de0:
    // 0x242de0: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x242de4: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x242de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x242de8: 0xc090a68  jal         func_2429A0
    ctx->pc = 0x242DE8u;
    SET_GPR_U32(ctx, 31, 0x242DF0u);
    ctx->pc = 0x242DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242DE8u;
            // 0x242dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2429A0u;
    if (runtime->hasFunction(0x2429A0u)) {
        auto targetFn = runtime->lookupFunction(0x2429A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DF0u; }
        if (ctx->pc != 0x242DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMoveItemPos__FPiPii_0x2429a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DF0u; }
        if (ctx->pc != 0x242DF0u) { return; }
    }
    ctx->pc = 0x242DF0u;
label_242df0:
    // 0x242df0: 0x8fb1018c  lw          $s1, 0x18C($sp)
    ctx->pc = 0x242df0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x242df4: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x242df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x242df8: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x242df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x242dfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e00: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x242e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x242e04: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x242e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x242e08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x242e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x242e0c: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x242e10: 0xc049c18  jal         func_127060
    ctx->pc = 0x242E10u;
    SET_GPR_U32(ctx, 31, 0x242E18u);
    ctx->pc = 0x242E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E10u;
            // 0x242e14: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E18u; }
        if (ctx->pc != 0x242E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E18u; }
        if (ctx->pc != 0x242E18u) { return; }
    }
    ctx->pc = 0x242E18u;
label_242e18:
    // 0x242e18: 0x27a40104  addiu       $a0, $sp, 0x104
    ctx->pc = 0x242e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x242e1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e20: 0xc049c18  jal         func_127060
    ctx->pc = 0x242E20u;
    SET_GPR_U32(ctx, 31, 0x242E28u);
    ctx->pc = 0x242E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E20u;
            // 0x242e24: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E28u; }
        if (ctx->pc != 0x242E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E28u; }
        if (ctx->pc != 0x242E28u) { return; }
    }
    ctx->pc = 0x242E28u;
label_242e28:
    // 0x242e28: 0x87a300f4  lh          $v1, 0xF4($sp)
    ctx->pc = 0x242e28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x242e2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x242e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x242e30: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x242E30u;
    {
        const bool branch_taken_0x242e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x242E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242E30u;
            // 0x242e34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e30) {
            ctx->pc = 0x242E74u;
            goto label_242e74;
        }
    }
    ctx->pc = 0x242E38u;
    // 0x242e38: 0x8f849510  lw          $a0, -0x6AF0($gp)
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
    // 0x242e3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x242e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242e40: 0xa3a200fd  sb          $v0, 0xFD($sp)
    ctx->pc = 0x242e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 2));
    // 0x242e44: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x242e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x242e48: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x242e4c: 0xc08799c  jal         func_21E670
    ctx->pc = 0x242E4Cu;
    SET_GPR_U32(ctx, 31, 0x242E54u);
    ctx->pc = 0x242E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E4Cu;
            // 0x242e50: 0x27a70180  addiu       $a3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E670u;
    if (runtime->hasFunction(0x21E670u)) {
        auto targetFn = runtime->lookupFunction(0x21E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E54u; }
        if (ctx->pc != 0x242E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E54u; }
        if (ctx->pc != 0x242E54u) { return; }
    }
    ctx->pc = 0x242E54u;
label_242e54:
    // 0x242e54: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x242E54u;
    {
        const bool branch_taken_0x242e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e54) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242E5Cu;
    // 0x242e5c: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x242E5Cu;
    {
        const bool branch_taken_0x242e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242E5Cu;
            // 0x242e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e5c) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242E64u;
    // 0x242e64: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x242E64u;
    SET_GPR_U32(ctx, 31, 0x242E6Cu);
    ctx->pc = 0x242E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E64u;
            // 0x242e68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E6Cu; }
        if (ctx->pc != 0x242E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E6Cu; }
        if (ctx->pc != 0x242E6Cu) { return; }
    }
    ctx->pc = 0x242E6Cu;
label_242e6c:
    // 0x242e6c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x242E6Cu;
    {
        const bool branch_taken_0x242e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242E6Cu;
            // 0x242e70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e6c) {
            ctx->pc = 0x242F24u;
            goto label_242f24;
        }
    }
    ctx->pc = 0x242E74u;
label_242e74:
    // 0x242e74: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x242E74u;
    SET_GPR_U32(ctx, 31, 0x242E7Cu);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E7Cu; }
        if (ctx->pc != 0x242E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E7Cu; }
        if (ctx->pc != 0x242E7Cu) { return; }
    }
    ctx->pc = 0x242E7Cu;
label_242e7c:
    // 0x242e7c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x242E7Cu;
    {
        const bool branch_taken_0x242e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e7c) {
            ctx->pc = 0x242ED0u;
            goto label_242ed0;
        }
    }
    ctx->pc = 0x242E84u;
    // 0x242e84: 0x87a3008a  lh          $v1, 0x8A($sp)
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x242e88: 0x87a20106  lh          $v0, 0x106($sp)
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 262)));
    // 0x242e8c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x242E8Cu;
    {
        const bool branch_taken_0x242e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242e8c) {
            ctx->pc = 0x242ED0u;
            goto label_242ed0;
        }
    }
    ctx->pc = 0x242E94u;
    // 0x242e94: 0x8f849510  lw          $a0, -0x6AF0($gp)
    ctx->pc = 0x242e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
    // 0x242e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e9c: 0xa3a200fd  sb          $v0, 0xFD($sp)
    ctx->pc = 0x242e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 2));
    // 0x242ea0: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x242ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x242ea4: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x242ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x242ea8: 0xc08799c  jal         func_21E670
    ctx->pc = 0x242EA8u;
    SET_GPR_U32(ctx, 31, 0x242EB0u);
    ctx->pc = 0x242EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242EA8u;
            // 0x242eac: 0x27a70180  addiu       $a3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E670u;
    if (runtime->hasFunction(0x21E670u)) {
        auto targetFn = runtime->lookupFunction(0x21E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EB0u; }
        if (ctx->pc != 0x242EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EB0u; }
        if (ctx->pc != 0x242EB0u) { return; }
    }
    ctx->pc = 0x242EB0u;
label_242eb0:
    // 0x242eb0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x242EB0u;
    {
        const bool branch_taken_0x242eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x242eb0) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242EB8u;
    // 0x242eb8: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x242EB8u;
    {
        const bool branch_taken_0x242eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242EB8u;
            // 0x242ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eb8) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242EC0u;
    // 0x242ec0: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x242EC0u;
    SET_GPR_U32(ctx, 31, 0x242EC8u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EC8u; }
        if (ctx->pc != 0x242EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EC8u; }
        if (ctx->pc != 0x242EC8u) { return; }
    }
    ctx->pc = 0x242EC8u;
label_242ec8:
    // 0x242ec8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x242EC8u;
    {
        const bool branch_taken_0x242ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ec8) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242ED0u;
label_242ed0:
    // 0x242ed0: 0x8f849510  lw          $a0, -0x6AF0($gp)
    ctx->pc = 0x242ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
    // 0x242ed4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x242ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x242ed8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x242ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x242edc: 0xc08799c  jal         func_21E670
    ctx->pc = 0x242EDCu;
    SET_GPR_U32(ctx, 31, 0x242EE4u);
    ctx->pc = 0x242EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242EDCu;
            // 0x242ee0: 0x27a70178  addiu       $a3, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E670u;
    if (runtime->hasFunction(0x21E670u)) {
        auto targetFn = runtime->lookupFunction(0x21E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EE4u; }
        if (ctx->pc != 0x242EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EE4u; }
        if (ctx->pc != 0x242EE4u) { return; }
    }
    ctx->pc = 0x242EE4u;
label_242ee4:
    // 0x242ee4: 0x8f849510  lw          $a0, -0x6AF0($gp)
    ctx->pc = 0x242ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
    // 0x242ee8: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x242ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x242eec: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x242ef0: 0xc08799c  jal         func_21E670
    ctx->pc = 0x242EF0u;
    SET_GPR_U32(ctx, 31, 0x242EF8u);
    ctx->pc = 0x242EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242EF0u;
            // 0x242ef4: 0x27a70180  addiu       $a3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E670u;
    if (runtime->hasFunction(0x21E670u)) {
        auto targetFn = runtime->lookupFunction(0x21E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EF8u; }
        if (ctx->pc != 0x242EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMoveItemInfo__13CMenuMoveItemFP19MENU_ITEM_MOVE_INFOPiPi_0x21e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EF8u; }
        if (ctx->pc != 0x242EF8u) { return; }
    }
    ctx->pc = 0x242EF8u;
label_242ef8:
    // 0x242ef8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x242efc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242EFCu;
    {
        const bool branch_taken_0x242efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242efc) {
            ctx->pc = 0x242F0Cu;
            goto label_242f0c;
        }
    }
    ctx->pc = 0x242F04u;
    // 0x242f04: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x242F04u;
    SET_GPR_U32(ctx, 31, 0x242F0Cu);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F0Cu; }
        if (ctx->pc != 0x242F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F0Cu; }
        if (ctx->pc != 0x242F0Cu) { return; }
    }
    ctx->pc = 0x242F0Cu;
label_242f0c:
    // 0x242f0c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x242f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x242f10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242F10u;
    {
        const bool branch_taken_0x242f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242f10) {
            ctx->pc = 0x242F20u;
            goto label_242f20;
        }
    }
    ctx->pc = 0x242F18u;
    // 0x242f18: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x242F18u;
    SET_GPR_U32(ctx, 31, 0x242F20u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F20u; }
        if (ctx->pc != 0x242F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F20u; }
        if (ctx->pc != 0x242F20u) { return; }
    }
    ctx->pc = 0x242F20u;
label_242f20:
    // 0x242f20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x242f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_242f24:
    // 0x242f24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x242f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242f28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x242f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242f2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x242f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242f30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x242f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242f34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x242f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242f40: 0x3e00008  jr          $ra
    ctx->pc = 0x242F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242F40u;
            // 0x242f44: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242F48u;
}
