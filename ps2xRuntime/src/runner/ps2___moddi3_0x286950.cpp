#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __moddi3
// Address: 0x286950 - 0x286fb8
void ps2___moddi3_0x286950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___moddi3_0x286950");
#endif

    ctx->pc = 0x286950u;

    // 0x286950: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x286950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286954: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286958: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x286958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28695c: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x28695cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x286960: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x286960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x286964: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x286964u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x286968: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x286968u;
    {
        const bool branch_taken_0x286968 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286968u;
            // 0x28696c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286968) {
            ctx->pc = 0x2869C4u;
            goto label_2869c4;
        }
    }
    ctx->pc = 0x286970u;
    // 0x286970: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x286970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x286974: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x286974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x286978: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28697c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286980: 0x21023  negu        $v0, $v0
    ctx->pc = 0x286980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x286984: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x286984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x286988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28698c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x28698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x286990: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286994: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x286998: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x286998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x28699c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28699cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2869a0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2869a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2869a4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2869a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2869a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2869a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2869ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2869acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2869b0: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x2869b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2869b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2869b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2869b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2869bc: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x2869bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2869c0: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x2869c0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_2869c4:
    // 0x2869c4: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x2869c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2869c8: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2869C8u;
    {
        const bool branch_taken_0x2869c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2869CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2869C8u;
            // 0x2869cc: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869c8) {
            ctx->pc = 0x286A18u;
            goto label_286a18;
        }
    }
    ctx->pc = 0x2869D0u;
    // 0x2869d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2869d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2869d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2869d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2869d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2869dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2869dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2869e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2869e4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x2869e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2869e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2869e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2869ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2869ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2869f0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2869f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2869f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2869f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2869f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2869fc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2869fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x286a00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286a00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286a04: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x286a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x286a08: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x286a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x286a0c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x286a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286a10: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x286a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x286a14: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x286a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_286a18:
    // 0x286a18: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x286a18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x286a1c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x286a1cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x286a20: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x286a20u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x286a24: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x286a24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x286a28: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x286a28u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x286a2c: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x286a2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x286a30: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x286a30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x286a34: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x286A34u;
    {
        const bool branch_taken_0x286a34 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A34u;
            // 0x286a38: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a34) {
            ctx->pc = 0x286D04u;
            goto label_286d04;
        }
    }
    ctx->pc = 0x286A3Cu;
    // 0x286a3c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x286a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286a40: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x286A40u;
    {
        const bool branch_taken_0x286a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A40u;
            // 0x286a44: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a40) {
            ctx->pc = 0x286AD0u;
            goto label_286ad0;
        }
    }
    ctx->pc = 0x286A48u;
    // 0x286a48: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x286a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286a4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286A4Cu;
    {
        const bool branch_taken_0x286a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A4Cu;
            // 0x286a50: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a4c) {
            ctx->pc = 0x286A68u;
            goto label_286a68;
        }
    }
    ctx->pc = 0x286A54u;
    // 0x286a54: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x286a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x286a58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x286a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286a5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286A5Cu;
    {
        const bool branch_taken_0x286a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A5Cu;
            // 0x286a60: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a5c) {
            ctx->pc = 0x286A80u;
            goto label_286a80;
        }
    }
    ctx->pc = 0x286A64u;
    // 0x286a64: 0x0  nop
    ctx->pc = 0x286a64u;
    // NOP
label_286a68:
    // 0x286a68: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x286a6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x286a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x286a70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x286a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286a74: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x286a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286a78: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x286a78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x286a7c: 0x0  nop
    ctx->pc = 0x286a7cu;
    // NOP
label_286a80:
    // 0x286a80: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x286a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x286a84: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x286a88: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x286a8c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x286a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x286a90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286a94: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x286a94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286a98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x286a9c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x286a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x286aa0: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x286AA0u;
    {
        const bool branch_taken_0x286aa0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AA0u;
            // 0x286aa4: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286aa0) {
            ctx->pc = 0x286ABCu;
            goto label_286abc;
        }
    }
    ctx->pc = 0x286AA8u;
    // 0x286aa8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x286aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x286aac: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x286aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x286ab0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x286ab4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x286ab4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286ab8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x286ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_286abc:
    // 0x286abc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x286abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x286ac0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x286ac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x286ac4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x286AC4u;
    {
        const bool branch_taken_0x286ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AC4u;
            // 0x286ac8: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ac4) {
            ctx->pc = 0x286C48u;
            goto label_286c48;
        }
    }
    ctx->pc = 0x286ACCu;
    // 0x286acc: 0x0  nop
    ctx->pc = 0x286accu;
    // NOP
label_286ad0:
    // 0x286ad0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286AD0u;
    {
        const bool branch_taken_0x286ad0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x286AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AD0u;
            // 0x286ad4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ad0) {
            ctx->pc = 0x286AF8u;
            goto label_286af8;
        }
    }
    ctx->pc = 0x286AD8u;
    // 0x286ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286adc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286ADCu;
    {
        const bool branch_taken_0x286adc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x286adc) {
            ctx->pc = 0x286AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286ADCu;
            // 0x286ae0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286AE4u;
            goto label_286ae4;
        }
    }
    ctx->pc = 0x286AE4u;
label_286ae4:
    // 0x286ae4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x286ae4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x286ae8: 0x1012  mflo        $v0
    ctx->pc = 0x286ae8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286aec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x286aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286af0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x286af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x286af4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x286af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_286af8:
    // 0x286af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286AF8u;
    {
        const bool branch_taken_0x286af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AF8u;
            // 0x286afc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286af8) {
            ctx->pc = 0x286B10u;
            goto label_286b10;
        }
    }
    ctx->pc = 0x286B00u;
    // 0x286b00: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x286b04: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x286b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286B08u;
    {
        const bool branch_taken_0x286b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B08u;
            // 0x286b0c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b08) {
            ctx->pc = 0x286B28u;
            goto label_286b28;
        }
    }
    ctx->pc = 0x286B10u;
label_286b10:
    // 0x286b10: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x286b14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x286b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x286b18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x286b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286b1c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x286b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286b20: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x286b20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x286b24: 0x0  nop
    ctx->pc = 0x286b24u;
    // NOP
label_286b28:
    // 0x286b28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x286b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x286b2c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x286b30: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x286b34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x286b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x286b38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286b3c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x286b3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286b40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x286b44: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x286b44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x286b48: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x286B48u;
    {
        const bool branch_taken_0x286b48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B48u;
            // 0x286b4c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b48) {
            ctx->pc = 0x286B60u;
            goto label_286b60;
        }
    }
    ctx->pc = 0x286B50u;
    // 0x286b50: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x286b50u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x286b54: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x286b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x286b58: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x286B58u;
    {
        const bool branch_taken_0x286b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286B58u;
            // 0x286b5c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b58) {
            ctx->pc = 0x286C3Cu;
            goto label_286c3c;
        }
    }
    ctx->pc = 0x286B60u;
label_286b60:
    // 0x286b60: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x286b64: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x286b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x286b68: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x286b6c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x286b6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286b70: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x286b70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x286b74: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x286b78: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x286b7c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x286b7cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x286b80: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x286b80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x286b84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x286b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b88: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x286b8c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286B8Cu;
    {
        const bool branch_taken_0x286b8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b8c) {
            ctx->pc = 0x286B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286B8Cu;
            // 0x286b90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286B94u;
            goto label_286b94;
        }
    }
    ctx->pc = 0x286B94u;
label_286b94:
    // 0x286b94: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x286b94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b98: 0x1012  mflo        $v0
    ctx->pc = 0x286b98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286b9c: 0x1810  mfhi        $v1
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286ba0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286ba4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286ba8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286ba8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286bac: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x286bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x286bb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x286bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286bb4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286bb8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x286BB8u;
    {
        const bool branch_taken_0x286bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286bb8) {
            ctx->pc = 0x286BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BB8u;
            // 0x286bbc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286BE4u;
            goto label_286be4;
        }
    }
    ctx->pc = 0x286BC0u;
    // 0x286bc0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x286bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x286bc4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286bc8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x286BC8u;
    {
        const bool branch_taken_0x286bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286bc8) {
            ctx->pc = 0x286BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BC8u;
            // 0x286bcc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286BE4u;
            goto label_286be4;
        }
    }
    ctx->pc = 0x286BD0u;
    // 0x286bd0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286bd4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x286BD4u;
    {
        const bool branch_taken_0x286bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286bd4) {
            ctx->pc = 0x286BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BD4u;
            // 0x286bd8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286BE0u;
            goto label_286be0;
        }
    }
    ctx->pc = 0x286BDCu;
    // 0x286bdc: 0x0  nop
    ctx->pc = 0x286bdcu;
    // NOP
label_286be0:
    // 0x286be0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x286be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286be4:
    // 0x286be4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x286be8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x286be8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x286bec: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286BECu;
    {
        const bool branch_taken_0x286bec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x286bec) {
            ctx->pc = 0x286BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286BECu;
            // 0x286bf0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286BF4u;
            goto label_286bf4;
        }
    }
    ctx->pc = 0x286BF4u;
label_286bf4:
    // 0x286bf4: 0x1012  mflo        $v0
    ctx->pc = 0x286bf4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286bf8: 0x1810  mfhi        $v1
    ctx->pc = 0x286bf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286bfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286c00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286c04: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286c04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286c08: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x286c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x286c0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x286c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286c10: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286c14: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x286C14u;
    {
        const bool branch_taken_0x286c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286c14) {
            ctx->pc = 0x286C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C14u;
            // 0x286c18: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C3Cu;
            goto label_286c3c;
        }
    }
    ctx->pc = 0x286C1Cu;
    // 0x286c1c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x286c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x286c20: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286c24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286C24u;
    {
        const bool branch_taken_0x286c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286C24u;
            // 0x286c28: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c24) {
            ctx->pc = 0x286C3Cu;
            goto label_286c3c;
        }
    }
    ctx->pc = 0x286C2Cu;
    // 0x286c2c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286c30: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286C30u;
    {
        const bool branch_taken_0x286c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286c30) {
            ctx->pc = 0x286C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C30u;
            // 0x286c34: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C38u;
            goto label_286c38;
        }
    }
    ctx->pc = 0x286C38u;
label_286c38:
    // 0x286c38: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x286c38u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286c3c:
    // 0x286c3c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x286c3cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x286c40: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x286c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c44: 0x0  nop
    ctx->pc = 0x286c44u;
    // NOP
label_286c48:
    // 0x286c48: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x286c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x286c4c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C4Cu;
            // 0x286c50: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C54u;
            goto label_286c54;
        }
    }
    ctx->pc = 0x286C54u;
label_286c54:
    // 0x286c54: 0x1012  mflo        $v0
    ctx->pc = 0x286c54u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286c58: 0x1810  mfhi        $v1
    ctx->pc = 0x286c58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286c5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286c60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286c64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286c68: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x286c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x286c6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x286c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286c70: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286c74: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x286C74u;
    {
        const bool branch_taken_0x286c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286c74) {
            ctx->pc = 0x286C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C74u;
            // 0x286c78: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C9Cu;
            goto label_286c9c;
        }
    }
    ctx->pc = 0x286C7Cu;
    // 0x286c7c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x286c80: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x286c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286c84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286C84u;
    {
        const bool branch_taken_0x286c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286c84) {
            ctx->pc = 0x286C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C84u;
            // 0x286c88: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C9Cu;
            goto label_286c9c;
        }
    }
    ctx->pc = 0x286C8Cu;
    // 0x286c8c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286c90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286C90u;
    {
        const bool branch_taken_0x286c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286c90) {
            ctx->pc = 0x286C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286C90u;
            // 0x286c94: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286C98u;
            goto label_286c98;
        }
    }
    ctx->pc = 0x286C98u;
label_286c98:
    // 0x286c98: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x286c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286c9c:
    // 0x286c9c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x286c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x286ca0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x286ca0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x286ca4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286CA4u;
    {
        const bool branch_taken_0x286ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ca4) {
            ctx->pc = 0x286CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286CA4u;
            // 0x286ca8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286CACu;
label_286cac:
    // 0x286cac: 0x1012  mflo        $v0
    ctx->pc = 0x286cacu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286cb0: 0x1810  mfhi        $v1
    ctx->pc = 0x286cb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286cb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286cb8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286cbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286cc0: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x286cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x286cc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x286cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286cc8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x286cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x286ccc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286CCCu;
    {
        const bool branch_taken_0x286ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ccc) {
            ctx->pc = 0x286CECu;
            goto label_286cec;
        }
    }
    ctx->pc = 0x286CD4u;
    // 0x286cd4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x286cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x286cd8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x286cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286cdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286CDCu;
    {
        const bool branch_taken_0x286cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CDCu;
            // 0x286ce0: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cdc) {
            ctx->pc = 0x286CECu;
            goto label_286cec;
        }
    }
    ctx->pc = 0x286CE4u;
    // 0x286ce4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286CE4u;
    {
        const bool branch_taken_0x286ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286ce4) {
            ctx->pc = 0x286CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286CE4u;
            // 0x286ce8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286CECu;
            goto label_286cec;
        }
    }
    ctx->pc = 0x286CECu;
label_286cec:
    // 0x286cec: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x286CECu;
    {
        const bool branch_taken_0x286cec = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CECu;
            // 0x286cf0: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cec) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286CF4u;
    // 0x286cf4: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x286cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x286cf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286cfc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x286CFCu;
    {
        const bool branch_taken_0x286cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286CFCu;
            // 0x286d00: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cfc) {
            ctx->pc = 0x286F48u;
            goto label_286f48;
        }
    }
    ctx->pc = 0x286D04u;
label_286d04:
    // 0x286d04: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286d08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286D08u;
    {
        const bool branch_taken_0x286d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D08u;
            // 0x286d0c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d08) {
            ctx->pc = 0x286D24u;
            goto label_286d24;
        }
    }
    ctx->pc = 0x286D10u;
    // 0x286d10: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x286d14: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x286d14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286d18: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x286d18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x286d1c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x286D1Cu;
    {
        const bool branch_taken_0x286d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D1Cu;
            // 0x286d20: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d1c) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286D24u;
label_286d24:
    // 0x286d24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x286d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x286d28: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x286d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286d2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286D2Cu;
    {
        const bool branch_taken_0x286d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D2Cu;
            // 0x286d30: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d2c) {
            ctx->pc = 0x286D48u;
            goto label_286d48;
        }
    }
    ctx->pc = 0x286D34u;
    // 0x286d34: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x286d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x286d38: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286d3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286D3Cu;
    {
        const bool branch_taken_0x286d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D3Cu;
            // 0x286d40: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d3c) {
            ctx->pc = 0x286D60u;
            goto label_286d60;
        }
    }
    ctx->pc = 0x286D44u;
    // 0x286d44: 0x0  nop
    ctx->pc = 0x286d44u;
    // NOP
label_286d48:
    // 0x286d48: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x286d4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x286d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x286d50: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x286d54: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x286d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286d58: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x286d58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x286d5c: 0x0  nop
    ctx->pc = 0x286d5cu;
    // NOP
label_286d60:
    // 0x286d60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x286d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x286d64: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x286d68: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x286d6c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x286d70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286d74: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x286d74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286d78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x286d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x286d7c: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x286d80: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x286D80u;
    {
        const bool branch_taken_0x286d80 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D80u;
            // 0x286d84: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d80) {
            ctx->pc = 0x286DC8u;
            goto label_286dc8;
        }
    }
    ctx->pc = 0x286D88u;
    // 0x286d88: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x286d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x286d8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286D8Cu;
    {
        const bool branch_taken_0x286d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D8Cu;
            // 0x286d90: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d8c) {
            ctx->pc = 0x286DA0u;
            goto label_286da0;
        }
    }
    ctx->pc = 0x286D94u;
    // 0x286d94: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x286d98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286D98u;
    {
        const bool branch_taken_0x286d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286d98) {
            ctx->pc = 0x286DB0u;
            goto label_286db0;
        }
    }
    ctx->pc = 0x286DA0u;
label_286da0:
    // 0x286da0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x286da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x286da4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x286da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x286da8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286dac: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x286dacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286db0:
    // 0x286db0: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x286DB0u;
    {
        const bool branch_taken_0x286db0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DB0u;
            // 0x286db4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286db0) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286DB8u;
    // 0x286db8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x286db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x286dbc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286dc0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x286DC0u;
    {
        const bool branch_taken_0x286dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DC0u;
            // 0x286dc4: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dc0) {
            ctx->pc = 0x286F48u;
            goto label_286f48;
        }
    }
    ctx->pc = 0x286DC8u;
label_286dc8:
    // 0x286dc8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x286dcc: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x286dd0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x286dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x286dd4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x286dd8: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x286ddc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x286ddcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286de0: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x286de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x286de4: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x286de8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x286de8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x286dec: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x286decu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x286df0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x286df0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x286df4: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x286df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x286df8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x286df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x286dfc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286DFCu;
            // 0x286e00: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x1012  mflo        $v0
    ctx->pc = 0x286e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286e08: 0x1810  mfhi        $v1
    ctx->pc = 0x286e08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286e0c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x286e0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e14: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286e18: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286e18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286e1c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x286e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x286e20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286e24: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286e28: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286E28u;
            // 0x286e2c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286E5Cu;
            goto label_286e5c;
        }
    }
    ctx->pc = 0x286E30u;
    // 0x286e30: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x286e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x286e34: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x286e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286e38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286E38u;
    {
        const bool branch_taken_0x286e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E38u;
            // 0x286e3c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e38) {
            ctx->pc = 0x286E58u;
            goto label_286e58;
        }
    }
    ctx->pc = 0x286E40u;
    // 0x286e40: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x286e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286e44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286E44u;
    {
        const bool branch_taken_0x286e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e44) {
            ctx->pc = 0x286E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286E44u;
            // 0x286e48: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286E5Cu;
            goto label_286e5c;
        }
    }
    ctx->pc = 0x286E4Cu;
    // 0x286e4c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x286e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x286e50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x286e54: 0x0  nop
    ctx->pc = 0x286e54u;
    // NOP
label_286e58:
    // 0x286e58: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x286e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_286e5c:
    // 0x286e5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286E5Cu;
    {
        const bool branch_taken_0x286e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e5c) {
            ctx->pc = 0x286E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286E5Cu;
            // 0x286e60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x286E64u;
            goto label_286e64;
        }
    }
    ctx->pc = 0x286E64u;
label_286e64:
    // 0x286e64: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x286e64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x286e68: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x286e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x286e6c: 0x1012  mflo        $v0
    ctx->pc = 0x286e6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x286e70: 0x1810  mfhi        $v1
    ctx->pc = 0x286e70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x286e74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x286e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286e80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286e80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286e84: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x286e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x286e88: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x286e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x286e8c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286e90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286E90u;
    {
        const bool branch_taken_0x286e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286E90u;
            // 0x286e94: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e90) {
            ctx->pc = 0x286EC0u;
            goto label_286ec0;
        }
    }
    ctx->pc = 0x286E98u;
    // 0x286e98: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x286e9c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x286e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x286ea0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286EA0u;
    {
        const bool branch_taken_0x286ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EA0u;
            // 0x286ea4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ea0) {
            ctx->pc = 0x286EBCu;
            goto label_286ebc;
        }
    }
    ctx->pc = 0x286EA8u;
    // 0x286ea8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x286ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x286EACu;
    {
        const bool branch_taken_0x286eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EACu;
            // 0x286eb0: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286eac) {
            ctx->pc = 0x286EC0u;
            goto label_286ec0;
        }
    }
    ctx->pc = 0x286EB4u;
    // 0x286eb4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x286eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x286eb8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_286ebc:
    // 0x286ebc: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x286ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_286ec0:
    // 0x286ec0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x286ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x286ec4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x286ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x286ec8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x286ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x286ecc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x286eccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ed0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x286ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x286ed4: 0x480019  multu       $v0, $t0
    ctx->pc = 0x286ed4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x286ed8: 0x3810  mfhi        $a3
    ctx->pc = 0x286ed8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x286edc: 0x3012  mflo        $a2
    ctx->pc = 0x286edcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x286ee0: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x286ee0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286ee4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286EE4u;
    {
        const bool branch_taken_0x286ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EE4u;
            // 0x286ee8: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ee4) {
            ctx->pc = 0x286F00u;
            goto label_286f00;
        }
    }
    ctx->pc = 0x286EECu;
    // 0x286eec: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x286EECu;
    {
        const bool branch_taken_0x286eec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x286EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EECu;
            // 0x286ef0: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286eec) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286EF4u;
    // 0x286ef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286EF4u;
    {
        const bool branch_taken_0x286ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ef4) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286EFCu;
    // 0x286efc: 0x0  nop
    ctx->pc = 0x286efcu;
    // NOP
label_286f00:
    // 0x286f00: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x286f04: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x286f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x286f08: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x286f08u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286f0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x286f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286f10:
    // 0x286f10: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x286F10u;
    {
        const bool branch_taken_0x286f10 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F10u;
            // 0x286f14: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f10) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286F18u;
    // 0x286f18: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x286f1c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x286f20: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286f24: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x286f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x286f28: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x286f2c: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x286f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x286f30: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x286f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x286f34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286f38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x286f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x286f3c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x286f3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x286f40: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x286f40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x286f44: 0x0  nop
    ctx->pc = 0x286f44u;
    // NOP
label_286f48:
    // 0x286f48: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x286f48u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_286f4c:
    // 0x286f4c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x286F4Cu;
    {
        const bool branch_taken_0x286f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F4Cu;
            // 0x286f50: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f4c) {
            ctx->pc = 0x286FA8u;
            goto label_286fa8;
        }
    }
    ctx->pc = 0x286F54u;
    // 0x286f54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286f58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x286f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x286f5c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x286f5cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x286f60: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x286f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286f64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x286f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x286f68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x286f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x286f6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286f6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286f70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x286f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286f74: 0x31823  negu        $v1, $v1
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x286f78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286f7c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x286f7cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x286f80: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x286f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x286f84: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x286f84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x286f88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286f8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x286f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x286f90: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x286f90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x286f94: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x286f94u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x286f98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x286f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286f9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286fa0: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x286fa0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x286fa4: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x286fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_286fa8:
    // 0x286fa8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x286fa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286fac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x286facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x286FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FB0u;
            // 0x286fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286FB8u;
}
