#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishing__FPfP6CCPolyi
// Address: 0x302550 - 0x302628
void CheckFishing__FPfP6CCPolyi_0x302550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishing__FPfP6CCPolyi_0x302550");
#endif

    switch (ctx->pc) {
        case 0x3025acu: goto label_3025ac;
        case 0x3025c8u: goto label_3025c8;
        default: break;
    }

    ctx->pc = 0x302550u;

    // 0x302550: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x302550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x302554: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x302554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x302558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x302558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30255c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x30255cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x302560: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x302560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x302564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30256c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30256cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302570: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x302570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302578: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x302578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30257c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x30257cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x302580: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302584: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x302584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x302588: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30258c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x30258cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302590: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x302590u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x302594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302598: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x302598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30259c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30259cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3025a0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3025a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3025a4: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x3025A4u;
    SET_GPR_U32(ctx, 31, 0x3025ACu);
    ctx->pc = 0x3025A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3025A4u;
            // 0x3025a8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3025ACu; }
        if (ctx->pc != 0x3025ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3025ACu; }
        if (ctx->pc != 0x3025ACu) { return; }
    }
    ctx->pc = 0x3025ACu;
label_3025ac:
    // 0x3025ac: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3025ACu;
    {
        const bool branch_taken_0x3025ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3025B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3025ACu;
            // 0x3025b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025ac) {
            ctx->pc = 0x3025BCu;
            goto label_3025bc;
        }
    }
    ctx->pc = 0x3025B4u;
    // 0x3025b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3025B4u;
    {
        const bool branch_taken_0x3025b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3025B4u;
            // 0x3025b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025b4) {
            ctx->pc = 0x302614u;
            goto label_302614;
        }
    }
    ctx->pc = 0x3025BCu;
label_3025bc:
    // 0x3025bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3025bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3025c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3025c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3025c8:
    // 0x3025c8: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x3025c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x3025cc: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x3025ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3025d0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x3025d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3025d4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x3025d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3025d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3025d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3025dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3025dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3025e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3025e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3025e4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3025e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3025e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3025ec: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x3025ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x3025f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3025F0u;
    {
        const bool branch_taken_0x3025f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3025f0) {
            ctx->pc = 0x302600u;
            goto label_302600;
        }
    }
    ctx->pc = 0x3025F8u;
    // 0x3025f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3025F8u;
    {
        const bool branch_taken_0x3025f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3025F8u;
            // 0x3025fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025f8) {
            ctx->pc = 0x302614u;
            goto label_302614;
        }
    }
    ctx->pc = 0x302600u;
label_302600:
    // 0x302600: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x302600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x302604: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x302604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x302608: 0x18a0ffef  blez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x302608u;
    {
        const bool branch_taken_0x302608 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x30260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302608u;
            // 0x30260c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302608) {
            ctx->pc = 0x3025C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3025c8;
        }
    }
    ctx->pc = 0x302610u;
    // 0x302610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302614:
    // 0x302614: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x302614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30261c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30261cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302620: 0x3e00008  jr          $ra
    ctx->pc = 0x302620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302620u;
            // 0x302624: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302628u;
}
