#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuHowMuchNumSelect__FiP13CGameDataUsedi
// Address: 0x238950 - 0x238ab4
void MenuHowMuchNumSelect__FiP13CGameDataUsedi_0x238950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuHowMuchNumSelect__FiP13CGameDataUsedi_0x238950");
#endif

    switch (ctx->pc) {
        case 0x2389f4u: goto label_2389f4;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a9cu: goto label_238a9c;
        default: break;
    }

    ctx->pc = 0x238950u;

    // 0x238950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238954: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x238954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x238958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23895c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238964: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x238964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238968u;
    {
        const bool branch_taken_0x238968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238968u;
            // 0x23896c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238968) {
            ctx->pc = 0x238980u;
            goto label_238980;
        }
    }
    ctx->pc = 0x238970u;
    // 0x238970: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238974: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x238974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238978u;
    {
        const bool branch_taken_0x238978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238978u;
            // 0x23897c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238978) {
            ctx->pc = 0x238998u;
            goto label_238998;
        }
    }
    ctx->pc = 0x238980u;
label_238980:
    // 0x238980: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x238980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x238984: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238984u;
    {
        const bool branch_taken_0x238984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238984u;
            // 0x238988: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238984) {
            ctx->pc = 0x23899Cu;
            goto label_23899c;
        }
    }
    ctx->pc = 0x23898Cu;
    // 0x23898c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x23898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x238990: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x238990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238994: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x238994u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_238998:
    // 0x238998: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x238998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_23899c:
    // 0x23899c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23899Cu;
    {
        const bool branch_taken_0x23899c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23899Cu;
            // 0x2389a0: 0x2602fffb  addiu       $v0, $s0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23899c) {
            ctx->pc = 0x2389B4u;
            goto label_2389b4;
        }
    }
    ctx->pc = 0x2389A4u;
    // 0x2389a4: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x2389a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2389a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2389A8u;
    {
        const bool branch_taken_0x2389a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389A8u;
            // 0x2389ac: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389a8) {
            ctx->pc = 0x2389C0u;
            goto label_2389c0;
        }
    }
    ctx->pc = 0x2389B0u;
    // 0x2389b0: 0x2602fffb  addiu       $v0, $s0, -0x5
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
label_2389b4:
    // 0x2389b4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2389b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2389b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2389B8u;
    {
        const bool branch_taken_0x2389b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389B8u;
            // 0x2389bc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389b8) {
            ctx->pc = 0x2389E0u;
            goto label_2389e0;
        }
    }
    ctx->pc = 0x2389C0u;
label_2389c0:
    // 0x2389c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2389C0u;
    {
        const bool branch_taken_0x2389c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389C0u;
            // 0x2389c4: 0x26020005  addiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c0) {
            ctx->pc = 0x2389D8u;
            goto label_2389d8;
        }
    }
    ctx->pc = 0x2389C8u;
    // 0x2389c8: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x2389c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2389cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2389CCu;
    {
        const bool branch_taken_0x2389cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389CCu;
            // 0x2389d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389cc) {
            ctx->pc = 0x2389E4u;
            goto label_2389e4;
        }
    }
    ctx->pc = 0x2389D4u;
    // 0x2389d4: 0x26020005  addiu       $v0, $s0, 0x5
    ctx->pc = 0x2389d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_2389d8:
    // 0x2389d8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2389d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2389dc: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2389dcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_2389e0:
    // 0x2389e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2389e4:
    // 0x2389e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2389E4u;
    {
        const bool branch_taken_0x2389e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389E4u;
            // 0x2389e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389e4) {
            ctx->pc = 0x2389F4u;
            goto label_2389f4;
        }
    }
    ctx->pc = 0x2389ECu;
    // 0x2389ec: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x2389ECu;
    SET_GPR_U32(ctx, 31, 0x2389F4u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389F4u; }
        if (ctx->pc != 0x2389F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389F4u; }
        if (ctx->pc != 0x2389F4u) { return; }
    }
    ctx->pc = 0x2389F4u;
label_2389f4:
    // 0x2389f4: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2389F4u;
    {
        const bool branch_taken_0x2389f4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2389f4) {
            ctx->pc = 0x238A00u;
            goto label_238a00;
        }
    }
    ctx->pc = 0x2389FCu;
    // 0x2389fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2389fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238a00:
    // 0x238a00: 0x8f849608  lw          $a0, -0x69F8($gp)
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238a04: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x238a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x238a08: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x238a08u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x238a0c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x238a10: 0xaf839608  sw          $v1, -0x69F8($gp)
    ctx->pc = 0x238a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 3));
    // 0x238a14: 0x8f839608  lw          $v1, -0x69F8($gp)
    ctx->pc = 0x238a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238a18: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x238A18u;
    {
        const bool branch_taken_0x238a18 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x238A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A18u;
            // 0x238a1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a18) {
            ctx->pc = 0x238A24u;
            goto label_238a24;
        }
    }
    ctx->pc = 0x238A20u;
    // 0x238a20: 0xaf839608  sw          $v1, -0x69F8($gp)
    ctx->pc = 0x238a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 3));
label_238a24:
    // 0x238a24: 0x8f839608  lw          $v1, -0x69F8($gp)
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238a28: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x238a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238a2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x238A2Cu;
    {
        const bool branch_taken_0x238a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a2c) {
            ctx->pc = 0x238A38u;
            goto label_238a38;
        }
    }
    ctx->pc = 0x238A34u;
    // 0x238a34: 0xaf829608  sw          $v0, -0x69F8($gp)
    ctx->pc = 0x238a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 2));
label_238a38:
    // 0x238a38: 0x8f829608  lw          $v0, -0x69F8($gp)
    ctx->pc = 0x238a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238a3c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238A3Cu;
    {
        const bool branch_taken_0x238a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x238A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A3Cu;
            // 0x238a40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a3c) {
            ctx->pc = 0x238A84u;
            goto label_238a84;
        }
    }
    ctx->pc = 0x238A44u;
    // 0x238a44: 0xc094274  jal         func_2509D0
    ctx->pc = 0x238A44u;
    SET_GPR_U32(ctx, 31, 0x238A4Cu);
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A44u;
            // 0x238a48: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A4Cu; }
        if (ctx->pc != 0x238A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A4Cu; }
        if (ctx->pc != 0x238A4Cu) { return; }
    }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238a50: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x238a50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x238a54: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x238a54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x238a58: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238a5c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x238A5Cu;
    {
        const bool branch_taken_0x238a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A5Cu;
            // 0x238a60: 0xa440005c  sh          $zero, 0x5C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a5c) {
            ctx->pc = 0x238A74u;
            goto label_238a74;
        }
    }
    ctx->pc = 0x238A64u;
    // 0x238a64: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238a68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x238a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238a6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238A6Cu;
    {
        const bool branch_taken_0x238a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A6Cu;
            // 0x238a70: 0xa443005c  sh          $v1, 0x5C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a6c) {
            ctx->pc = 0x238A80u;
            goto label_238a80;
        }
    }
    ctx->pc = 0x238A74u;
label_238a74:
    // 0x238a74: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238a78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x238a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238a7c: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x238a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
label_238a80:
    // 0x238a80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238a84:
    // 0x238a84: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x238a88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x238a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x238a8c: 0x8f869608  lw          $a2, -0x69F8($gp)
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x238a90: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x238a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x238a94: 0xc089728  jal         func_225CA0
    ctx->pc = 0x238A94u;
    SET_GPR_U32(ctx, 31, 0x238A9Cu);
    ctx->pc = 0x238A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A94u;
            // 0x238a98: 0x24a5abe0  addiu       $a1, $a1, -0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A9Cu; }
        if (ctx->pc != 0x238A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A9Cu; }
        if (ctx->pc != 0x238A9Cu) { return; }
    }
    ctx->pc = 0x238A9Cu;
label_238a9c:
    // 0x238a9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238aac: 0x3e00008  jr          $ra
    ctx->pc = 0x238AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AACu;
            // 0x238ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238AB4u;
}
