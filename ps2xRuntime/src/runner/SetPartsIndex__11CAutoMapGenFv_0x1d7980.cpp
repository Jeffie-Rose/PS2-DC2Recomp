#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartsIndex__11CAutoMapGenFv
// Address: 0x1d7980 - 0x1d7b2c
void SetPartsIndex__11CAutoMapGenFv_0x1d7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartsIndex__11CAutoMapGenFv_0x1d7980");
#endif

    switch (ctx->pc) {
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79f8u: goto label_1d79f8;
        case 0x1d7a5cu: goto label_1d7a5c;
        case 0x1d7a94u: goto label_1d7a94;
        default: break;
    }

    ctx->pc = 0x1d7980u;

    // 0x1d7980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d7984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d7988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d798c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7990: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d7990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d799c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1D799Cu;
    {
        const bool branch_taken_0x1d799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D799Cu;
            // 0x1d79a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d799c) {
            ctx->pc = 0x1D7AFCu;
            goto label_1d7afc;
        }
    }
    ctx->pc = 0x1D79A4u;
label_1d79a4:
    // 0x1d79a4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D79A4u;
    {
        const bool branch_taken_0x1d79a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79A4u;
            // 0x1d79a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79a4) {
            ctx->pc = 0x1D7AE8u;
            goto label_1d7ae8;
        }
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x0  nop
    ctx->pc = 0x1d79acu;
    // NOP
    // 0x1d79b0: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d79b4: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x1d79b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d79b8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d79b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d79bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d79c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d79c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d79c8: 0x724021  addu        $t0, $v1, $s2
    ctx->pc = 0x1d79c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d79cc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d79d0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D79D0u;
    {
        const bool branch_taken_0x1d79d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D79D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79D0u;
            // 0x1d79d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79d0) {
            ctx->pc = 0x1D79E0u;
            goto label_1d79e0;
        }
    }
    ctx->pc = 0x1D79D8u;
    // 0x1d79d8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1D79D8u;
    {
        const bool branch_taken_0x1d79d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79D8u;
            // 0x1d79dc: 0xa5030004  sh          $v1, 0x4($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79d8) {
            ctx->pc = 0x1D7AE0u;
            goto label_1d7ae0;
        }
    }
    ctx->pc = 0x1D79E0u;
label_1d79e0:
    // 0x1d79e0: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1d79e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1d79e4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D79E4u;
    {
        const bool branch_taken_0x1d79e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79E4u;
            // 0x1d79e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79e4) {
            ctx->pc = 0x1D7A34u;
            goto label_1d7a34;
        }
    }
    ctx->pc = 0x1D79ECu;
    // 0x1d79ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d79ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79f0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d79f4: 0x24a59080  addiu       $a1, $a1, -0x6F80
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938752));
label_1d79f8:
    // 0x1d79f8: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x1d79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d79fc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1d79fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d7a00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d7a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d7a04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7A24u;
            goto label_1d7a24;
        }
    }
    ctx->pc = 0x1D7A0Cu;
    // 0x1d7a0c: 0x90840006  lbu         $a0, 0x6($a0)
    ctx->pc = 0x1d7a0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d7a10: 0x9103000a  lbu         $v1, 0xA($t0)
    ctx->pc = 0x1d7a10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1d7a14: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7A14u;
    {
        const bool branch_taken_0x1d7a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7a14) {
            ctx->pc = 0x1D7A24u;
            goto label_1d7a24;
        }
    }
    ctx->pc = 0x1D7A1Cu;
    // 0x1d7a1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D7A1Cu;
    {
        const bool branch_taken_0x1d7a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A1Cu;
            // 0x1d7a20: 0xa5060004  sh          $a2, 0x4($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a1c) {
            ctx->pc = 0x1D7AE0u;
            goto label_1d7ae0;
        }
    }
    ctx->pc = 0x1D7A24u;
label_1d7a24:
    // 0x1d7a24: 0x0  nop
    ctx->pc = 0x1d7a24u;
    // NOP
    // 0x1d7a28: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x1d7a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x1d7a2c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1D7A2Cu;
    {
        const bool branch_taken_0x1d7a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A2Cu;
            // 0x1d7a30: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a2c) {
            ctx->pc = 0x1D79F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d79f8;
        }
    }
    ctx->pc = 0x1D7A34u;
label_1d7a34:
    // 0x1d7a34: 0x0  nop
    ctx->pc = 0x1d7a34u;
    // NOP
    // 0x1d7a38: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x1d7a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x1d7a3c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D7A3Cu;
    {
        const bool branch_taken_0x1d7a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a3c) {
            ctx->pc = 0x1D7AE0u;
            goto label_1d7ae0;
        }
    }
    ctx->pc = 0x1D7A44u;
    // 0x1d7a44: 0x9108000a  lbu         $t0, 0xA($t0)
    ctx->pc = 0x1d7a44u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1d7a48: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1d7a4c: 0x24847df0  addiu       $a0, $a0, 0x7DF0
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32240));
    // 0x1d7a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D7A54u;
    SET_GPR_U32(ctx, 31, 0x1D7A5Cu);
    ctx->pc = 0x1D7A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A54u;
            // 0x1d7a58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A5Cu; }
        if (ctx->pc != 0x1D7A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A5Cu; }
        if (ctx->pc != 0x1D7A5Cu) { return; }
    }
    ctx->pc = 0x1D7A5Cu;
label_1d7a5c:
    // 0x1d7a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a64: 0x866401b8  lh          $a0, 0x1B8($s3)
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d7a68: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d7a6c: 0x8e6301cc  lw          $v1, 0x1CC($s3)
    ctx->pc = 0x1d7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 460)));
    // 0x1d7a70: 0x24c69080  addiu       $a2, $a2, -0x6F80
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938752));
    // 0x1d7a74: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x1d7a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d7a78: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d7a7c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7a80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d7a84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7a88: 0x724821  addu        $t1, $v1, $s2
    ctx->pc = 0x1d7a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d7a8c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1d7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a90: 0x0  nop
    ctx->pc = 0x1d7a90u;
    // NOP
label_1d7a94:
    // 0x1d7a94: 0x0  nop
    ctx->pc = 0x1d7a94u;
    // NOP
    // 0x1d7a98: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x1d7a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d7a9c: 0x85430004  lh          $v1, 0x4($t2)
    ctx->pc = 0x1d7a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d7aa0: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7AA0u;
    {
        const bool branch_taken_0x1d7aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d7aa0) {
            ctx->pc = 0x1D7AD0u;
            goto label_1d7ad0;
        }
    }
    ctx->pc = 0x1D7AA8u;
    // 0x1d7aa8: 0x91440007  lbu         $a0, 0x7($t2)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x1d7aac: 0x9123000a  lbu         $v1, 0xA($t1)
    ctx->pc = 0x1d7aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1d7ab0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7AB0u;
    {
        const bool branch_taken_0x1d7ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ab0) {
            ctx->pc = 0x1D7AD0u;
            goto label_1d7ad0;
        }
    }
    ctx->pc = 0x1D7AB8u;
    // 0x1d7ab8: 0x91440006  lbu         $a0, 0x6($t2)
    ctx->pc = 0x1d7ab8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x1d7abc: 0x9123000b  lbu         $v1, 0xB($t1)
    ctx->pc = 0x1d7abcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x1d7ac0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7AC0u;
    {
        const bool branch_taken_0x1d7ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ac0) {
            ctx->pc = 0x1D7AD0u;
            goto label_1d7ad0;
        }
    }
    ctx->pc = 0x1D7AC8u;
    // 0x1d7ac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7AC8u;
    {
        const bool branch_taken_0x1d7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AC8u;
            // 0x1d7acc: 0xa5270004  sh          $a3, 0x4($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ac8) {
            ctx->pc = 0x1D7AE0u;
            goto label_1d7ae0;
        }
    }
    ctx->pc = 0x1D7AD0u;
label_1d7ad0:
    // 0x1d7ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d7ad4: 0x28e30118  slti        $v1, $a3, 0x118
    ctx->pc = 0x1d7ad4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)280) ? 1 : 0);
    // 0x1d7ad8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7AD8u;
    {
        const bool branch_taken_0x1d7ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AD8u;
            // 0x1d7adc: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ad8) {
            ctx->pc = 0x1D7A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7a94;
        }
    }
    ctx->pc = 0x1D7AE0u;
label_1d7ae0:
    // 0x1d7ae0: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1d7ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1d7ae4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d7ae8:
    // 0x1d7ae8: 0x866401b8  lh          $a0, 0x1B8($s3)
    ctx->pc = 0x1d7ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x1d7aec: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x1d7aecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d7af0: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x1D7AF0u;
    {
        const bool branch_taken_0x1d7af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7af0) {
            ctx->pc = 0x1D79ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d79ac;
        }
    }
    ctx->pc = 0x1D7AF8u;
    // 0x1d7af8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d7afc:
    // 0x1d7afc: 0x0  nop
    ctx->pc = 0x1d7afcu;
    // NOP
    // 0x1d7b00: 0x866301ba  lh          $v1, 0x1BA($s3)
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 442)));
    // 0x1d7b04: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1d7b04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7b08: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1D7B08u;
    {
        const bool branch_taken_0x1d7b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B08u;
            // 0x1d7b0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b08) {
            ctx->pc = 0x1D79A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d79a4;
        }
    }
    ctx->pc = 0x1D7B10u;
    // 0x1d7b10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7b14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B24u;
            // 0x1d7b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7B2Cu;
}
