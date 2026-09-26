#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ArrangePartsList__12CMenuGeoramaFii
// Address: 0x1f8980 - 0x1f8dc8
void ArrangePartsList__12CMenuGeoramaFii_0x1f8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArrangePartsList__12CMenuGeoramaFii_0x1f8980");
#endif

    switch (ctx->pc) {
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8ab0u: goto label_1f8ab0;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8b00u: goto label_1f8b00;
        case 0x1f8b3cu: goto label_1f8b3c;
        case 0x1f8b50u: goto label_1f8b50;
        case 0x1f8b70u: goto label_1f8b70;
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8ba4u: goto label_1f8ba4;
        case 0x1f8bb4u: goto label_1f8bb4;
        case 0x1f8bf4u: goto label_1f8bf4;
        case 0x1f8c08u: goto label_1f8c08;
        case 0x1f8c28u: goto label_1f8c28;
        case 0x1f8c4cu: goto label_1f8c4c;
        case 0x1f8c5cu: goto label_1f8c5c;
        case 0x1f8c6cu: goto label_1f8c6c;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cc0u: goto label_1f8cc0;
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d14u: goto label_1f8d14;
        case 0x1f8d24u: goto label_1f8d24;
        case 0x1f8d78u: goto label_1f8d78;
        default: break;
    }

    ctx->pc = 0x1f8980u;

    // 0x1f8980: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1f8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1f8984: 0x3402bbb8  ori         $v0, $zero, 0xBBB8
    ctx->pc = 0x1f8984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48056);
    // 0x1f8988: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f898c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f8990: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f8990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f8994: 0x3401bbbc  ori         $at, $zero, 0xBBBC
    ctx->pc = 0x1f8994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48060);
    // 0x1f8998: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f899c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1f899cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f89a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f89a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f89ac: 0x26e301a0  addiu       $v1, $s7, 0x1A0
    ctx->pc = 0x1f89acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 416));
    // 0x1f89b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f89b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f89b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f89b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f89b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f89bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f89c0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f89c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f89c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f89c8: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F89C8u;
    {
        const bool branch_taken_0x1f89c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F89CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F89C8u;
            // 0x1f89cc: 0x2e18021  addu        $s0, $s7, $at (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89c8) {
            ctx->pc = 0x1F89F0u;
            goto label_1f89f0;
        }
    }
    ctx->pc = 0x1F89D0u;
    // 0x1f89d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f89d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f89d4: 0x26e301a4  addiu       $v1, $s7, 0x1A4
    ctx->pc = 0x1f89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 420));
    // 0x1f89d8: 0x34210fc0  ori         $at, $at, 0xFC0
    ctx->pc = 0x1f89d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4032);
    // 0x1f89dc: 0x2e18021  addu        $s0, $s7, $at
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x1f89e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f89e4: 0x2e10821  addu        $at, $s7, $at
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x1f89e8: 0x8c310fbc  lw          $s1, 0xFBC($at)
    ctx->pc = 0x1f89e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
    // 0x1f89ec: 0x0  nop
    ctx->pc = 0x1f89ecu;
    // NOP
label_1f89f0:
    // 0x1f89f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f89f4: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F89F4u;
    {
        const bool branch_taken_0x1f89f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F89F4u;
            // 0x1f89f8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89f4) {
            ctx->pc = 0x1F8A18u;
            goto label_1f8a18;
        }
    }
    ctx->pc = 0x1F89FCu;
    // 0x1f89fc: 0x26e301a8  addiu       $v1, $s7, 0x1A8
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 424));
    // 0x1f8a00: 0x342163c4  ori         $at, $at, 0x63C4
    ctx->pc = 0x1f8a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25540);
    // 0x1f8a04: 0x2e18021  addu        $s0, $s7, $at
    ctx->pc = 0x1f8a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x1f8a08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8a0c: 0x2e10821  addu        $at, $s7, $at
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x1f8a10: 0x8c3163c0  lw          $s1, 0x63C0($at)
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
    // 0x1f8a14: 0x0  nop
    ctx->pc = 0x1f8a14u;
    // NOP
label_1f8a18:
    // 0x1f8a18: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A18u;
    {
        const bool branch_taken_0x1f8a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a18) {
            ctx->pc = 0x1F8A2Cu;
            goto label_1f8a2c;
        }
    }
    ctx->pc = 0x1F8A20u;
    // 0x1f8a20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8a28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f8a2c:
    // 0x1f8a2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8a30: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1f8a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f8a34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8A34u;
    {
        const bool branch_taken_0x1f8a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a34) {
            ctx->pc = 0x1F8A40u;
            goto label_1f8a40;
        }
    }
    ctx->pc = 0x1F8A3Cu;
    // 0x1f8a3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f8a40:
    // 0x1f8a40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8a48: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1F8A48u;
    {
        const bool branch_taken_0x1f8a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A48u;
            // 0x1f8a4c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a48) {
            ctx->pc = 0x1F8CA0u;
            goto label_1f8ca0;
        }
    }
    ctx->pc = 0x1F8A50u;
    // 0x1f8a50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8a54: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1F8A54u;
    {
        const bool branch_taken_0x1f8a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A54u;
            // 0x1f8a58: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a54) {
            ctx->pc = 0x1F8BE8u;
            goto label_1f8be8;
        }
    }
    ctx->pc = 0x1F8A5Cu;
    // 0x1f8a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a60: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8A60u;
    {
        const bool branch_taken_0x1f8a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A60u;
            // 0x1f8a64: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a60) {
            ctx->pc = 0x1F8B30u;
            goto label_1f8b30;
        }
    }
    ctx->pc = 0x1F8A68u;
    // 0x1f8a68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8A68u;
    {
        const bool branch_taken_0x1f8a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A68u;
            // 0x1f8a6c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a68) {
            ctx->pc = 0x1F8A78u;
            goto label_1f8a78;
        }
    }
    ctx->pc = 0x1F8A70u;
    // 0x1f8a70: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1F8A70u;
    {
        const bool branch_taken_0x1f8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a70) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8A78u;
label_1f8a78:
    // 0x1f8a78: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1F8A78u;
    {
        const bool branch_taken_0x1f8a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A78u;
            // 0x1f8a7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a78) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8A80u;
    // 0x1f8a80: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1f8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f8a84:
    // 0x1f8a84: 0xb1082a  slt         $at, $a1, $s1
    ctx->pc = 0x1f8a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8a88: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F8A88u;
    {
        const bool branch_taken_0x1f8a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A88u;
            // 0x1f8a8c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a88) {
            ctx->pc = 0x1F8B18u;
            goto label_1f8b18;
        }
    }
    ctx->pc = 0x1F8A90u;
    // 0x1f8a90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8a94: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1f8a94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8a98: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1f8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f8a9c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f8aa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8aa4: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1f8aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8aa8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8aac: 0x0  nop
    ctx->pc = 0x1f8aacu;
    // NOP
label_1f8ab0:
    // 0x1f8ab0: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x1f8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1f8ab4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8ab8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1f8ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f8abc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8ABCu;
    {
        const bool branch_taken_0x1f8abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8ABCu;
            // 0x1f8ac0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8abc) {
            ctx->pc = 0x1F8B08u;
            goto label_1f8b08;
        }
    }
    ctx->pc = 0x1F8AC4u;
    // 0x1f8ac4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f8ac8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f8acc: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f8accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f8ad0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8ad4: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1f8ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8ad8: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8AD8u;
    SET_GPR_U32(ctx, 31, 0x1F8AE0u);
    ctx->pc = 0x1F8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AD8u;
            // 0x1f8adc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AE0u; }
        if (ctx->pc != 0x1F8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AE0u; }
        if (ctx->pc != 0x1F8AE0u) { return; }
    }
    ctx->pc = 0x1F8AE0u;
label_1f8ae0:
    // 0x1f8ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ae8: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8AE8u;
    SET_GPR_U32(ctx, 31, 0x1F8AF0u);
    ctx->pc = 0x1F8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AE8u;
            // 0x1f8aec: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AF0u; }
        if (ctx->pc != 0x1F8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8AF0u; }
        if (ctx->pc != 0x1F8AF0u) { return; }
    }
    ctx->pc = 0x1F8AF0u;
label_1f8af0:
    // 0x1f8af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8af4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f8af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f8af8: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8AF8u;
    SET_GPR_U32(ctx, 31, 0x1F8B00u);
    ctx->pc = 0x1F8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AF8u;
            // 0x1f8afc: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B00u; }
        if (ctx->pc != 0x1F8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B00u; }
        if (ctx->pc != 0x1F8B00u) { return; }
    }
    ctx->pc = 0x1F8B00u;
label_1f8b00:
    // 0x1f8b00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8B00u;
    {
        const bool branch_taken_0x1f8b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B00u;
            // 0x1f8b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b00) {
            ctx->pc = 0x1F8B18u;
            goto label_1f8b18;
        }
    }
    ctx->pc = 0x1F8B08u;
label_1f8b08:
    // 0x1f8b08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f8b0c: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1f8b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8b10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F8B10u;
    {
        const bool branch_taken_0x1f8b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B10u;
            // 0x1f8b14: 0x24c60038  addiu       $a2, $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b10) {
            ctx->pc = 0x1F8AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8ab0;
        }
    }
    ctx->pc = 0x1F8B18u;
label_1f8b18:
    // 0x1f8b18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f8b1c: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x1f8b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8b20: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F8B20u;
    {
        const bool branch_taken_0x1f8b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B20u;
            // 0x1f8b24: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b20) {
            ctx->pc = 0x1F8A84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8a84;
        }
    }
    ctx->pc = 0x1F8B28u;
    // 0x1f8b28: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1F8B28u;
    {
        const bool branch_taken_0x1f8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b28) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8B30u;
label_1f8b30:
    // 0x1f8b30: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
    ctx->pc = 0x1F8B30u;
    {
        const bool branch_taken_0x1f8b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B30u;
            // 0x1f8b34: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b30) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8B38u;
    // 0x1f8b38: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x1f8b38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f8b3c:
    // 0x1f8b3c: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x1f8b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8b40: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F8B40u;
    {
        const bool branch_taken_0x1f8b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B40u;
            // 0x1f8b44: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b40) {
            ctx->pc = 0x1F8BD0u;
            goto label_1f8bd0;
        }
    }
    ctx->pc = 0x1F8B48u;
    // 0x1f8b48: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8b4c: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1f8b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8b50:
    // 0x1f8b50: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f8b54: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1f8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f8b58: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1f8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1f8b5c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1f8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f8b60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8b64: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1f8b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8b68: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1F8B68u;
    SET_GPR_U32(ctx, 31, 0x1F8B70u);
    ctx->pc = 0x1F8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B68u;
            // 0x1f8b6c: 0x26650008  addiu       $a1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B70u; }
        if (ctx->pc != 0x1F8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B70u; }
        if (ctx->pc != 0x1F8B70u) { return; }
    }
    ctx->pc = 0x1F8B70u;
label_1f8b70:
    // 0x1f8b70: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8B70u;
    {
        const bool branch_taken_0x1f8b70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B70u;
            // 0x1f8b74: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b70) {
            ctx->pc = 0x1F8BBCu;
            goto label_1f8bbc;
        }
    }
    ctx->pc = 0x1F8B78u;
    // 0x1f8b78: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8b7c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8b80: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f8b84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8b88: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8b8c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B94u);
    ctx->pc = 0x1F8B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B8Cu;
            // 0x1f8b90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B94u; }
        if (ctx->pc != 0x1F8B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8B94u; }
        if (ctx->pc != 0x1F8B94u) { return; }
    }
    ctx->pc = 0x1F8B94u;
label_1f8b94:
    // 0x1f8b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b9c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F8BA4u);
    ctx->pc = 0x1F8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8B9Cu;
            // 0x1f8ba0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA4u; }
        if (ctx->pc != 0x1F8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BA4u; }
        if (ctx->pc != 0x1F8BA4u) { return; }
    }
    ctx->pc = 0x1F8BA4u;
label_1f8ba4:
    // 0x1f8ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ba8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f8ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8bac: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8BACu;
    SET_GPR_U32(ctx, 31, 0x1F8BB4u);
    ctx->pc = 0x1F8BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BACu;
            // 0x1f8bb0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BB4u; }
        if (ctx->pc != 0x1F8BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8BB4u; }
        if (ctx->pc != 0x1F8BB4u) { return; }
    }
    ctx->pc = 0x1F8BB4u;
label_1f8bb4:
    // 0x1f8bb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8BB4u;
    {
        const bool branch_taken_0x1f8bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BB4u;
            // 0x1f8bb8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bb4) {
            ctx->pc = 0x1F8BD0u;
            goto label_1f8bd0;
        }
    }
    ctx->pc = 0x1F8BBCu;
label_1f8bbc:
    // 0x1f8bbc: 0x0  nop
    ctx->pc = 0x1f8bbcu;
    // NOP
    // 0x1f8bc0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f8bc4: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x1f8bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8bc8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F8BC8u;
    {
        const bool branch_taken_0x1f8bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BC8u;
            // 0x1f8bcc: 0x26520038  addiu       $s2, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc8) {
            ctx->pc = 0x1F8B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8b50;
        }
    }
    ctx->pc = 0x1F8BD0u;
label_1f8bd0:
    // 0x1f8bd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f8bd4: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x1f8bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8bd8: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F8BD8u;
    {
        const bool branch_taken_0x1f8bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BD8u;
            // 0x1f8bdc: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd8) {
            ctx->pc = 0x1F8B3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8b3c;
        }
    }
    ctx->pc = 0x1F8BE0u;
    // 0x1f8be0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1F8BE0u;
    {
        const bool branch_taken_0x1f8be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8be0) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8BE8u;
label_1f8be8:
    // 0x1f8be8: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F8BE8u;
    {
        const bool branch_taken_0x1f8be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BE8u;
            // 0x1f8bec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8be8) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8BF0u;
    // 0x1f8bf0: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f8bf4:
    // 0x1f8bf4: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x1f8bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8bf8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F8BF8u;
    {
        const bool branch_taken_0x1f8bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8BF8u;
            // 0x1f8bfc: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bf8) {
            ctx->pc = 0x1F8C88u;
            goto label_1f8c88;
        }
    }
    ctx->pc = 0x1F8C00u;
    // 0x1f8c00: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8c04: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1f8c04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8c08:
    // 0x1f8c08: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f8c0c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1f8c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f8c10: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1f8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1f8c14: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1f8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f8c18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8c1c: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1f8c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8c20: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1F8C20u;
    SET_GPR_U32(ctx, 31, 0x1F8C28u);
    ctx->pc = 0x1F8C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C20u;
            // 0x1f8c24: 0x26650008  addiu       $a1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C28u; }
        if (ctx->pc != 0x1F8C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C28u; }
        if (ctx->pc != 0x1F8C28u) { return; }
    }
    ctx->pc = 0x1F8C28u;
label_1f8c28:
    // 0x1f8c28: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8C28u;
    {
        const bool branch_taken_0x1f8c28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C28u;
            // 0x1f8c2c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c28) {
            ctx->pc = 0x1F8C74u;
            goto label_1f8c74;
        }
    }
    ctx->pc = 0x1F8C30u;
    // 0x1f8c30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f8c34: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8c38: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f8c3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8c40: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1f8c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8c44: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8C44u;
    SET_GPR_U32(ctx, 31, 0x1F8C4Cu);
    ctx->pc = 0x1F8C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C44u;
            // 0x1f8c48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C4Cu; }
        if (ctx->pc != 0x1F8C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C4Cu; }
        if (ctx->pc != 0x1F8C4Cu) { return; }
    }
    ctx->pc = 0x1F8C4Cu;
label_1f8c4c:
    // 0x1f8c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c54: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8C54u;
    SET_GPR_U32(ctx, 31, 0x1F8C5Cu);
    ctx->pc = 0x1F8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C54u;
            // 0x1f8c58: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C5Cu; }
        if (ctx->pc != 0x1F8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C5Cu; }
        if (ctx->pc != 0x1F8C5Cu) { return; }
    }
    ctx->pc = 0x1F8C5Cu;
label_1f8c5c:
    // 0x1f8c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c60: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1f8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f8c64: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8C64u;
    SET_GPR_U32(ctx, 31, 0x1F8C6Cu);
    ctx->pc = 0x1F8C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C64u;
            // 0x1f8c68: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C6Cu; }
        if (ctx->pc != 0x1F8C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8C6Cu; }
        if (ctx->pc != 0x1F8C6Cu) { return; }
    }
    ctx->pc = 0x1F8C6Cu;
label_1f8c6c:
    // 0x1f8c6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8C6Cu;
    {
        const bool branch_taken_0x1f8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C6Cu;
            // 0x1f8c70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c6c) {
            ctx->pc = 0x1F8C88u;
            goto label_1f8c88;
        }
    }
    ctx->pc = 0x1F8C74u;
label_1f8c74:
    // 0x1f8c74: 0x0  nop
    ctx->pc = 0x1f8c74u;
    // NOP
    // 0x1f8c78: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f8c78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f8c7c: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x1f8c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8c80: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F8C80u;
    {
        const bool branch_taken_0x1f8c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C80u;
            // 0x1f8c84: 0x26520038  addiu       $s2, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c80) {
            ctx->pc = 0x1F8C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8c08;
        }
    }
    ctx->pc = 0x1F8C88u;
label_1f8c88:
    // 0x1f8c88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f8c88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f8c8c: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x1f8c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8c90: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F8C90u;
    {
        const bool branch_taken_0x1f8c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8C90u;
            // 0x1f8c94: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c90) {
            ctx->pc = 0x1F8BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8bf4;
        }
    }
    ctx->pc = 0x1F8C98u;
    // 0x1f8c98: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F8C98u;
    {
        const bool branch_taken_0x1f8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c98) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8CA0u;
label_1f8ca0:
    // 0x1f8ca0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F8CA0u;
    {
        const bool branch_taken_0x1f8ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CA0u;
            // 0x1f8ca4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ca0) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8CA8u;
    // 0x1f8ca8: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x1f8ca8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f8cac:
    // 0x1f8cac: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x1f8cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8cb0: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F8CB0u;
    {
        const bool branch_taken_0x1f8cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CB0u;
            // 0x1f8cb4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cb0) {
            ctx->pc = 0x1F8D40u;
            goto label_1f8d40;
        }
    }
    ctx->pc = 0x1F8CB8u;
    // 0x1f8cb8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8cbc: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1f8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8cc0:
    // 0x1f8cc0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1f8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f8cc4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1f8cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f8cc8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1f8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1f8ccc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1f8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f8cd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8cd4: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8cd8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1F8CD8u;
    SET_GPR_U32(ctx, 31, 0x1F8CE0u);
    ctx->pc = 0x1F8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CD8u;
            // 0x1f8cdc: 0x26650008  addiu       $a1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CE0u; }
        if (ctx->pc != 0x1F8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8CE0u; }
        if (ctx->pc != 0x1F8CE0u) { return; }
    }
    ctx->pc = 0x1F8CE0u;
label_1f8ce0:
    // 0x1f8ce0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8CE0u;
    {
        const bool branch_taken_0x1f8ce0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CE0u;
            // 0x1f8ce4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ce0) {
            ctx->pc = 0x1F8D2Cu;
            goto label_1f8d2c;
        }
    }
    ctx->pc = 0x1F8CE8u;
    // 0x1f8ce8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f8cec: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8cf0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f8cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f8cf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8cf8: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8cfc: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8CFCu;
    SET_GPR_U32(ctx, 31, 0x1F8D04u);
    ctx->pc = 0x1F8D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8CFCu;
            // 0x1f8d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D04u; }
        if (ctx->pc != 0x1F8D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D04u; }
        if (ctx->pc != 0x1F8D04u) { return; }
    }
    ctx->pc = 0x1F8D04u;
label_1f8d04:
    // 0x1f8d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f8d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d0c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D14u);
    ctx->pc = 0x1F8D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D0Cu;
            // 0x1f8d10: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D14u; }
        if (ctx->pc != 0x1F8D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D14u; }
        if (ctx->pc != 0x1F8D14u) { return; }
    }
    ctx->pc = 0x1F8D14u;
label_1f8d14:
    // 0x1f8d14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d18: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1f8d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f8d1c: 0xc049c18  jal         func_127060
    ctx->pc = 0x1F8D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D24u);
    ctx->pc = 0x1F8D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D1Cu;
            // 0x1f8d20: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D24u; }
        if (ctx->pc != 0x1F8D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8D24u; }
        if (ctx->pc != 0x1F8D24u) { return; }
    }
    ctx->pc = 0x1F8D24u;
label_1f8d24:
    // 0x1f8d24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8D24u;
    {
        const bool branch_taken_0x1f8d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D24u;
            // 0x1f8d28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d24) {
            ctx->pc = 0x1F8D40u;
            goto label_1f8d40;
        }
    }
    ctx->pc = 0x1F8D2Cu;
label_1f8d2c:
    // 0x1f8d2c: 0x0  nop
    ctx->pc = 0x1f8d2cu;
    // NOP
    // 0x1f8d30: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f8d34: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x1f8d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8d38: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F8D38u;
    {
        const bool branch_taken_0x1f8d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D38u;
            // 0x1f8d3c: 0x26520038  addiu       $s2, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d38) {
            ctx->pc = 0x1F8CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8cc0;
        }
    }
    ctx->pc = 0x1F8D40u;
label_1f8d40:
    // 0x1f8d40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f8d44: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x1f8d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f8d48: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F8D48u;
    {
        const bool branch_taken_0x1f8d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D48u;
            // 0x1f8d4c: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d48) {
            ctx->pc = 0x1F8CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8cac;
        }
    }
    ctx->pc = 0x1F8D50u;
label_1f8d50:
    // 0x1f8d50: 0x16c00011  bnez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F8D50u;
    {
        const bool branch_taken_0x1f8d50 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D50u;
            // 0x1f8d54: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d50) {
            ctx->pc = 0x1F8D98u;
            goto label_1f8d98;
        }
    }
    ctx->pc = 0x1F8D58u;
    // 0x1f8d58: 0x2e10821  addu        $at, $s7, $at
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 1)));
    // 0x1f8d5c: 0x8c26bbb8  lw          $a2, -0x4448($at)
    ctx->pc = 0x1f8d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f8d60: 0x28c10180  slti        $at, $a2, 0x180
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f8d64: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8D64u;
    {
        const bool branch_taken_0x1f8d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D64u;
            // 0x1f8d68: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d64) {
            ctx->pc = 0x1F8D98u;
            goto label_1f8d98;
        }
    }
    ctx->pc = 0x1F8D6Cu;
    // 0x1f8d6c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f8d70: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1f8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8d74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f8d78:
    // 0x1f8d78: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x1f8d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f8d7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f8d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f8d80: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1f8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1f8d84: 0x28c20180  slti        $v0, $a2, 0x180
    ctx->pc = 0x1f8d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f8d88: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1f8d88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8d8c: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x1f8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1f8d90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8D90u;
    {
        const bool branch_taken_0x1f8d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D90u;
            // 0x1f8d94: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d90) {
            ctx->pc = 0x1F8D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8d78;
        }
    }
    ctx->pc = 0x1F8D98u;
label_1f8d98:
    // 0x1f8d98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f8d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8d9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f8d9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f8da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8da4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f8da4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8da8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f8da8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8dac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8db0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8db4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f8db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8DC0u;
            // 0x1f8dc4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8DC8u;
}
