#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaySeSeq__FUiP13sndCSeSeqDatai
// Address: 0x1901f0 - 0x1902ec
void PlaySeSeq__FUiP13sndCSeSeqDatai_0x1901f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaySeSeq__FUiP13sndCSeSeqDatai_0x1901f0");
#endif

    switch (ctx->pc) {
        case 0x19021cu: goto label_19021c;
        case 0x190240u: goto label_190240;
        case 0x190268u: goto label_190268;
        case 0x190284u: goto label_190284;
        case 0x19028cu: goto label_19028c;
        case 0x190298u: goto label_190298;
        default: break;
    }

    ctx->pc = 0x1901f0u;

    // 0x1901f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1901f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1901f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1901f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1901f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1901fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1901fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x190200: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x190200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190208: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x190208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x19020c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x190210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190214: 0xc0632ac  jal         func_18CAB0
    ctx->pc = 0x190214u;
    SET_GPR_U32(ctx, 31, 0x19021Cu);
    ctx->pc = 0x190218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190214u;
            // 0x190218: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CAB0u;
    if (runtime->hasFunction(0x18CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x18CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19021Cu; }
        if (ctx->pc != 0x19021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmptySeSeq__FPi_0x18cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19021Cu; }
        if (ctx->pc != 0x19021Cu) { return; }
    }
    ctx->pc = 0x19021Cu;
label_19021c:
    // 0x19021c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19021cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190220: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x190220u;
    {
        const bool branch_taken_0x190220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x190224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190220u;
            // 0x190224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190220) {
            ctx->pc = 0x190230u;
            goto label_190230;
        }
    }
    ctx->pc = 0x190228u;
    // 0x190228: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190228u;
    {
        const bool branch_taken_0x190228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190228u;
            // 0x19022c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190228) {
            ctx->pc = 0x190238u;
            goto label_190238;
        }
    }
    ctx->pc = 0x190230u;
label_190230:
    // 0x190230: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x190230u;
    {
        const bool branch_taken_0x190230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190230u;
            // 0x190234: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190230) {
            ctx->pc = 0x1902D4u;
            goto label_1902d4;
        }
    }
    ctx->pc = 0x190238u;
label_190238:
    // 0x190238: 0xc062e20  jal         func_18B880
    ctx->pc = 0x190238u;
    SET_GPR_U32(ctx, 31, 0x190240u);
    ctx->pc = 0x18B880u;
    if (runtime->hasFunction(0x18B880u)) {
        auto targetFn = runtime->lookupFunction(0x18B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190240u; }
        if (ctx->pc != 0x190240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9sndCSeSeqFv_0x18b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190240u; }
        if (ctx->pc != 0x190240u) { return; }
    }
    ctx->pc = 0x190240u;
label_190240:
    // 0x190240: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x190244: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x190248: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190248u;
    {
        const bool branch_taken_0x190248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190248u;
            // 0x19024c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190248) {
            ctx->pc = 0x19025Cu;
            goto label_19025c;
        }
    }
    ctx->pc = 0x190250u;
    // 0x190250: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190250u;
    {
        const bool branch_taken_0x190250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x190254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190250u;
            // 0x190254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190250) {
            ctx->pc = 0x190260u;
            goto label_190260;
        }
    }
    ctx->pc = 0x190258u;
    // 0x190258: 0x24a5ff00  addiu       $a1, $a1, -0x100
    ctx->pc = 0x190258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
label_19025c:
    // 0x19025c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190260:
    // 0x190260: 0xc062e48  jal         func_18B920
    ctx->pc = 0x190260u;
    SET_GPR_U32(ctx, 31, 0x190268u);
    ctx->pc = 0x18B920u;
    if (runtime->hasFunction(0x18B920u)) {
        auto targetFn = runtime->lookupFunction(0x18B920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190268u; }
        if (ctx->pc != 0x190268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSeID__9sndCSeSeqFi_0x18b920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190268u; }
        if (ctx->pc != 0x190268u) { return; }
    }
    ctx->pc = 0x190268u;
label_190268:
    // 0x190268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19026c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19026Cu;
    {
        const bool branch_taken_0x19026c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x190270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19026Cu;
            // 0x190270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19026c) {
            ctx->pc = 0x19027Cu;
            goto label_19027c;
        }
    }
    ctx->pc = 0x190274u;
    // 0x190274: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x190274u;
    {
        const bool branch_taken_0x190274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190274) {
            ctx->pc = 0x1902D0u;
            goto label_1902d0;
        }
    }
    ctx->pc = 0x19027Cu;
label_19027c:
    // 0x19027c: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x19027Cu;
    SET_GPR_U32(ctx, 31, 0x190284u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190284u; }
        if (ctx->pc != 0x190284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190284u; }
        if (ctx->pc != 0x190284u) { return; }
    }
    ctx->pc = 0x190284u;
label_190284:
    // 0x190284: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x190284u;
    SET_GPR_U32(ctx, 31, 0x19028Cu);
    ctx->pc = 0x190288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190284u;
            // 0x190288: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19028Cu; }
        if (ctx->pc != 0x19028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19028Cu; }
        if (ctx->pc != 0x19028Cu) { return; }
    }
    ctx->pc = 0x19028Cu;
label_19028c:
    // 0x19028c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190290: 0xc063288  jal         func_18CA20
    ctx->pc = 0x190290u;
    SET_GPR_U32(ctx, 31, 0x190298u);
    ctx->pc = 0x190294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190290u;
            // 0x190294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190298u; }
        if (ctx->pc != 0x190298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190298u; }
        if (ctx->pc != 0x190298u) { return; }
    }
    ctx->pc = 0x190298u;
label_190298:
    // 0x190298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190298u;
    {
        const bool branch_taken_0x190298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190298) {
            ctx->pc = 0x1902A8u;
            goto label_1902a8;
        }
    }
    ctx->pc = 0x1902A0u;
    // 0x1902a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1902A0u;
    {
        const bool branch_taken_0x1902a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1902A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1902A0u;
            // 0x1902a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902a0) {
            ctx->pc = 0x1902D0u;
            goto label_1902d0;
        }
    }
    ctx->pc = 0x1902A8u;
label_1902a8:
    // 0x1902a8: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1902A8u;
    {
        const bool branch_taken_0x1902a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1902a8) {
            ctx->pc = 0x1902B4u;
            goto label_1902b4;
        }
    }
    ctx->pc = 0x1902B0u;
    // 0x1902b0: 0x2410007f  addiu       $s0, $zero, 0x7F
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1902b4:
    // 0x1902b4: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x1902b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x1902b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1902b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1902bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1902bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1902c0: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x1902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x1902c4: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1902c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x1902c8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1902c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1902cc: 0x0  nop
    ctx->pc = 0x1902ccu;
    // NOP
label_1902d0:
    // 0x1902d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1902d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1902d4:
    // 0x1902d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1902d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1902d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1902d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1902dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1902dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1902e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1902e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1902E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1902E4u;
            // 0x1902e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1902ECu;
}
