#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetInOutPartsIndex__11CAutoMapGenFi
// Address: 0x1d8570 - 0x1d8688
void SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetInOutPartsIndex__11CAutoMapGenFi_0x1d8570");
#endif

    switch (ctx->pc) {
        case 0x1d859cu: goto label_1d859c;
        case 0x1d85a8u: goto label_1d85a8;
        case 0x1d863cu: goto label_1d863c;
        case 0x1d8644u: goto label_1d8644;
        default: break;
    }

    ctx->pc = 0x1d8570u;

    // 0x1d8570: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d8574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8578: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d857c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d857cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8588: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d8588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d858c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8590: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d8590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8594: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D8594u;
    {
        const bool branch_taken_0x1d8594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8594u;
            // 0x1d8598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8594) {
            ctx->pc = 0x1D8614u;
            goto label_1d8614;
        }
    }
    ctx->pc = 0x1D859Cu;
label_1d859c:
    // 0x1d859c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d859cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85A0u;
            // 0x1d85a4: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D8600u;
            goto label_1d8600;
        }
    }
    ctx->pc = 0x1D85A8u;
label_1d85a8:
    // 0x1d85a8: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x1d85a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d85ac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D85ACu;
    {
        const bool branch_taken_0x1d85ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85ACu;
            // 0x1d85b0: 0xc42818  mult        $a1, $a2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85ac) {
            ctx->pc = 0x1D8610u;
            goto label_1d8610;
        }
    }
    ctx->pc = 0x1D85B4u;
    // 0x1d85b4: 0x8e4301cc  lw          $v1, 0x1CC($s2)
    ctx->pc = 0x1d85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
    // 0x1d85b8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d85bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d85bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d85c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d85c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d85c8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d85cc: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d85d0: 0x2883001c  slti        $v1, $a0, 0x1C
    ctx->pc = 0x1d85d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d85d4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D85D4u;
    {
        const bool branch_taken_0x1d85d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85D4u;
            // 0x1d85d8: 0x28810020  slti        $at, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85d4) {
            ctx->pc = 0x1D85F8u;
            goto label_1d85f8;
        }
    }
    ctx->pc = 0x1D85DCu;
    // 0x1d85dc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D85DCu;
    {
        const bool branch_taken_0x1d85dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85DCu;
            // 0x1d85e0: 0x13d1821  addu        $v1, $t1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85dc) {
            ctx->pc = 0x1D85F8u;
            goto label_1d85f8;
        }
    }
    ctx->pc = 0x1D85E4u;
    // 0x1d85e4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d85e8: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x1d85e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x1d85ec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d85ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d85f0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1d85f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d85f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d85f8:
    // 0x1d85f8: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x1d85fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d8600:
    // 0x1d8600: 0x864401b8  lh          $a0, 0x1B8($s2)
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1d8604: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1d8604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d8608: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D8608u;
    {
        const bool branch_taken_0x1d8608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8608) {
            ctx->pc = 0x1D85A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d85a8;
        }
    }
    ctx->pc = 0x1D8610u;
label_1d8610:
    // 0x1d8610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d8614:
    // 0x1d8614: 0x0  nop
    ctx->pc = 0x1d8614u;
    // NOP
    // 0x1d8618: 0x864301ba  lh          $v1, 0x1BA($s2)
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 442)));
    // 0x1d861c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1d861cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8620: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D8620u;
    {
        const bool branch_taken_0x1d8620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8620u;
            // 0x1d8624: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8620) {
            ctx->pc = 0x1D859Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d859c;
        }
    }
    ctx->pc = 0x1D8628u;
    // 0x1d8628: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8628u;
    {
        const bool branch_taken_0x1d8628 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8628u;
            // 0x1d862c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8628) {
            ctx->pc = 0x1D8670u;
            goto label_1d8670;
        }
    }
    ctx->pc = 0x1D8630u;
    // 0x1d8630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8634: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D8634u;
    SET_GPR_U32(ctx, 31, 0x1D863Cu);
    ctx->pc = 0x1D8638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8634u;
            // 0x1d8638: 0x24847e40  addiu       $a0, $a0, 0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D863Cu; }
        if (ctx->pc != 0x1D863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D863Cu; }
        if (ctx->pc != 0x1D863Cu) { return; }
    }
    ctx->pc = 0x1D863Cu;
label_1d863c:
    // 0x1d863c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D863Cu;
    SET_GPR_U32(ctx, 31, 0x1D8644u);
    ctx->pc = 0x1D8640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D863Cu;
            // 0x1d8640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8644u; }
        if (ctx->pc != 0x1D8644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8644u; }
        if (ctx->pc != 0x1D8644u) { return; }
    }
    ctx->pc = 0x1D8644u;
label_1d8644:
    // 0x1d8644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d8644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8648: 0x8e4501cc  lw          $a1, 0x1CC($s2)
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
    // 0x1d864c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d8650: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d8654: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d8654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d8658: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d865c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d865cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8660: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d8664: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1d8664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d8668: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d866c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x1d866cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_1d8670:
    // 0x1d8670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d8670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d867c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d867cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8680: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8680u;
            // 0x1d8684: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8688u;
}
