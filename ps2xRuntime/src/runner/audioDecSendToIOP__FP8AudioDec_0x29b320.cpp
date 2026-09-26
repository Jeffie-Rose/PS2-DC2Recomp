#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecSendToIOP__FP8AudioDec
// Address: 0x29b320 - 0x29b4d8
void audioDecSendToIOP__FP8AudioDec_0x29b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecSendToIOP__FP8AudioDec_0x29b320");
#endif

    switch (ctx->pc) {
        case 0x29b3c0u: goto label_29b3c0;
        case 0x29b3e8u: goto label_29b3e8;
        case 0x29b484u: goto label_29b484;
        default: break;
    }

    ctx->pc = 0x29b320u;

    // 0x29b320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b324: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b338: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b33c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29B33Cu;
    {
        const bool branch_taken_0x29b33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B33Cu;
            // 0x29b340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b33c) {
            ctx->pc = 0x29B3F0u;
            goto label_29b3f0;
        }
    }
    ctx->pc = 0x29B344u;
    // 0x29b344: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b348: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29B348u;
    {
        const bool branch_taken_0x29b348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B348u;
            // 0x29b34c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b348) {
            ctx->pc = 0x29B3B4u;
            goto label_29b3b4;
        }
    }
    ctx->pc = 0x29B350u;
    // 0x29b350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b354: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B354u;
    {
        const bool branch_taken_0x29b354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b354) {
            ctx->pc = 0x29B374u;
            goto label_29b374;
        }
    }
    ctx->pc = 0x29B35Cu;
    // 0x29b35c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B35Cu;
    {
        const bool branch_taken_0x29b35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B35Cu;
            // 0x29b360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b35c) {
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B364u;
    // 0x29b364: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29B364u;
    {
        const bool branch_taken_0x29b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B364u;
            // 0x29b368: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b364) {
            ctx->pc = 0x29B3FCu;
            goto label_29b3fc;
        }
    }
    ctx->pc = 0x29B36Cu;
label_29b36c:
    // 0x29b36c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x29B36Cu;
    {
        const bool branch_taken_0x29b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B36Cu;
            // 0x29b370: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b36c) {
            ctx->pc = 0x29B4C8u;
            goto label_29b4c8;
        }
    }
    ctx->pc = 0x29B374u;
label_29b374:
    // 0x29b374: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x29b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29b378: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x29b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29b37c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B37Cu;
    {
        const bool branch_taken_0x29b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B37Cu;
            // 0x29b380: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b37c) {
            ctx->pc = 0x29B388u;
            goto label_29b388;
        }
    }
    ctx->pc = 0x29B384u;
    // 0x29b384: 0x1cd  break       0, 7
    ctx->pc = 0x29b384u;
    runtime->handleBreak(rdram, ctx);
label_29b388:
    // 0x29b388: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x29b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x29b38c: 0x1810  mfhi        $v1
    ctx->pc = 0x29b38cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b394: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x29b394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x29b398: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x29b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29b39c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x29b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29b3a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b3a4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x29b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x29b3a8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x29b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x29b3ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3ACu;
            // 0x29b3b0: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3B4u;
label_29b3b4:
    // 0x29b3b4: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x29b3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29b3b8: 0xc046454  jal         func_119150
    ctx->pc = 0x29B3B8u;
    SET_GPR_U32(ctx, 31, 0x29B3C0u);
    ctx->pc = 0x29B3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3B8u;
            // 0x29b3bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3C0u; }
        if (ctx->pc != 0x29B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3C0u; }
        if (ctx->pc != 0x29B3C0u) { return; }
    }
    ctx->pc = 0x29B3C0u;
label_29b3c0:
    // 0x29b3c0: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x29b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x29b3c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29b3c8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x29b3cc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x29b3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x29b3d0: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x29b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x29b3d4: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x29b3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x29b3d8: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x29b3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x29b3dc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3e0: 0xc0a6d38  jal         func_29B4E0
    ctx->pc = 0x29B3E0u;
    SET_GPR_U32(ctx, 31, 0x29B3E8u);
    ctx->pc = 0x29B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3E0u;
            // 0x29b3e4: 0x624823  subu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B4E0u;
    if (runtime->hasFunction(0x29B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x29B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3E8u; }
        if (ctx->pc != 0x29B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iopGetArea__FPiPiPiPiP8AudioDeci_0x29b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3E8u; }
        if (ctx->pc != 0x29B3E8u) { return; }
    }
    ctx->pc = 0x29B3E8u;
label_29b3e8:
    // 0x29b3e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B3E8u;
    {
        const bool branch_taken_0x29b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b3e8) {
            ctx->pc = 0x29B3F8u;
            goto label_29b3f8;
        }
    }
    ctx->pc = 0x29B3F0u;
label_29b3f0:
    // 0x29b3f0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x29B3F0u;
    {
        const bool branch_taken_0x29b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3F0u;
            // 0x29b3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3f0) {
            ctx->pc = 0x29B4C4u;
            goto label_29b4c4;
        }
    }
    ctx->pc = 0x29B3F8u;
label_29b3f8:
    // 0x29b3f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_29b3fc:
    // 0x29b3fc: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x29b400: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x29b404: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29b408: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b40c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B40Cu;
    {
        const bool branch_taken_0x29b40c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B40Cu;
            // 0x29b410: 0x44001a  div         $zero, $v0, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b40c) {
            ctx->pc = 0x29B418u;
            goto label_29b418;
        }
    }
    ctx->pc = 0x29B414u;
    // 0x29b414: 0x1cd  break       0, 7
    ctx->pc = 0x29b414u;
    runtime->handleBreak(rdram, ctx);
label_29b418:
    // 0x29b418: 0x8e2a0030  lw          $t2, 0x30($s1)
    ctx->pc = 0x29b418u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29b41c: 0x1810  mfhi        $v1
    ctx->pc = 0x29b41cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b420: 0x51283  sra         $v0, $a1, 10
    ctx->pc = 0x29b420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 10));
    // 0x29b424: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x29B428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B424u;
            // 0x29b428: 0x1434021  addu        $t0, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B434u;
            goto label_29b434;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0x24a203ff  addiu       $v0, $a1, 0x3FF
    ctx->pc = 0x29b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1023));
    // 0x29b430: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x29b430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_29b434:
    // 0x29b434: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x29b434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x29b438: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x29b43c: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x29b43cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29b440: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x29b444: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B444u;
    {
        const bool branch_taken_0x29b444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b444) {
            ctx->pc = 0x29B450u;
            goto label_29b450;
        }
    }
    ctx->pc = 0x29B44Cu;
    // 0x29b44c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x29b44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_29b450:
    // 0x29b450: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29b450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29b454: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x29b458: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29b45c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x29b45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x29b460: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B460u;
    {
        const bool branch_taken_0x29b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B460u;
            // 0x29b464: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b460) {
            ctx->pc = 0x29B488u;
            goto label_29b488;
        }
    }
    ctx->pc = 0x29B468u;
    // 0x29b468: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x29b46c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x29b46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x29b470: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B470u;
    {
        const bool branch_taken_0x29b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b470) {
            ctx->pc = 0x29B488u;
            goto label_29b488;
        }
    }
    ctx->pc = 0x29B478u;
    // 0x29b478: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x29b47c: 0xc0a6d64  jal         func_29B590
    ctx->pc = 0x29B47Cu;
    SET_GPR_U32(ctx, 31, 0x29B484u);
    ctx->pc = 0x29B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B47Cu;
            // 0x29b480: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B590u;
    if (runtime->hasFunction(0x29B590u)) {
        auto targetFn = runtime->lookupFunction(0x29B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B484u; }
        if (ctx->pc != 0x29B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP2area__FiiiiPUciPUci_0x29b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B484u; }
        if (ctx->pc != 0x29B484u) { return; }
    }
    ctx->pc = 0x29B484u;
label_29b484:
    // 0x29b484: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b488:
    // 0x29b488: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x29b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x29b48c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x29b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29b490: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x29b490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x29b494: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x29b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29b498: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29b49c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x29b49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x29b4a0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x29b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x29b4a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x29b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29b4a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29b4ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B4ACu;
    {
        const bool branch_taken_0x29b4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4ACu;
            // 0x29b4b0: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4ac) {
            ctx->pc = 0x29B4B8u;
            goto label_29b4b8;
        }
    }
    ctx->pc = 0x29B4B4u;
    // 0x29b4b4: 0x1cd  break       0, 7
    ctx->pc = 0x29b4b4u;
    runtime->handleBreak(rdram, ctx);
label_29b4b8:
    // 0x29b4b8: 0x1810  mfhi        $v1
    ctx->pc = 0x29b4b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b4bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4c0: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x29b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_29b4c4:
    // 0x29b4c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b4c8:
    // 0x29b4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4D0u;
            // 0x29b4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B4D8u;
}
