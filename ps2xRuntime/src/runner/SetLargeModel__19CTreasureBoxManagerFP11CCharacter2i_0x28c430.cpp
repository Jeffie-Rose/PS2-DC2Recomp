#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLargeModel__19CTreasureBoxManagerFP11CCharacter2i
// Address: 0x28c430 - 0x28c500
void SetLargeModel__19CTreasureBoxManagerFP11CCharacter2i_0x28c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLargeModel__19CTreasureBoxManagerFP11CCharacter2i_0x28c430");
#endif

    switch (ctx->pc) {
        case 0x28c46cu: goto label_28c46c;
        case 0x28c478u: goto label_28c478;
        default: break;
    }

    ctx->pc = 0x28c430u;

    // 0x28c430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c448: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28c448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28c44c: 0xac910a94  sw          $s1, 0xA94($a0)
    ctx->pc = 0x28c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2708), GPR_U32(ctx, 17));
    // 0x28c450: 0x8cb00070  lw          $s0, 0x70($a1)
    ctx->pc = 0x28c450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x28c454: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28C454u;
    {
        const bool branch_taken_0x28c454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C454u;
            // 0x28c458: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c454) {
            ctx->pc = 0x28C4E8u;
            goto label_28c4e8;
        }
    }
    ctx->pc = 0x28C45Cu;
    // 0x28c45c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28c460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c464: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x28C464u;
    SET_GPR_U32(ctx, 31, 0x28C46Cu);
    ctx->pc = 0x28C468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C464u;
            // 0x28c468: 0x24a5d6d0  addiu       $a1, $a1, -0x2930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C46Cu; }
        if (ctx->pc != 0x28C46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C46Cu; }
        if (ctx->pc != 0x28C46Cu) { return; }
    }
    ctx->pc = 0x28C46Cu;
label_28c46c:
    // 0x28c46c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28C46Cu;
    {
        const bool branch_taken_0x28c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C46Cu;
            // 0x28c470: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c46c) {
            ctx->pc = 0x28C4E8u;
            goto label_28c4e8;
        }
    }
    ctx->pc = 0x28C474u;
    // 0x28c474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c478:
    // 0x28c478: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x28c478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x28c47c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28c480: 0xac900068  sw          $s0, 0x68($a0)
    ctx->pc = 0x28c480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 16));
    // 0x28c484: 0x28a30018  slti        $v1, $a1, 0x18
    ctx->pc = 0x28c484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x28c488: 0xac91006c  sw          $s1, 0x6C($a0)
    ctx->pc = 0x28c488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 17));
    // 0x28c48c: 0xac8200d4  sw          $v0, 0xD4($a0)
    ctx->pc = 0x28c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
    // 0x28c490: 0xac9000d8  sw          $s0, 0xD8($a0)
    ctx->pc = 0x28c490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 16));
    // 0x28c494: 0xac9100dc  sw          $s1, 0xDC($a0)
    ctx->pc = 0x28c494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 17));
    // 0x28c498: 0xac820144  sw          $v0, 0x144($a0)
    ctx->pc = 0x28c498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
    // 0x28c49c: 0xac900148  sw          $s0, 0x148($a0)
    ctx->pc = 0x28c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 16));
    // 0x28c4a0: 0xac91014c  sw          $s1, 0x14C($a0)
    ctx->pc = 0x28c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 17));
    // 0x28c4a4: 0xac8201b4  sw          $v0, 0x1B4($a0)
    ctx->pc = 0x28c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 2));
    // 0x28c4a8: 0xac9001b8  sw          $s0, 0x1B8($a0)
    ctx->pc = 0x28c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 16));
    // 0x28c4ac: 0xac9101bc  sw          $s1, 0x1BC($a0)
    ctx->pc = 0x28c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 17));
    // 0x28c4b0: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x28c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x28c4b4: 0xac900228  sw          $s0, 0x228($a0)
    ctx->pc = 0x28c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 16));
    // 0x28c4b8: 0xac91022c  sw          $s1, 0x22C($a0)
    ctx->pc = 0x28c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 17));
    // 0x28c4bc: 0xac820294  sw          $v0, 0x294($a0)
    ctx->pc = 0x28c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 2));
    // 0x28c4c0: 0xac900298  sw          $s0, 0x298($a0)
    ctx->pc = 0x28c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 16));
    // 0x28c4c4: 0xac91029c  sw          $s1, 0x29C($a0)
    ctx->pc = 0x28c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 17));
    // 0x28c4c8: 0xac820304  sw          $v0, 0x304($a0)
    ctx->pc = 0x28c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 2));
    // 0x28c4cc: 0xac900308  sw          $s0, 0x308($a0)
    ctx->pc = 0x28c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 776), GPR_U32(ctx, 16));
    // 0x28c4d0: 0xac91030c  sw          $s1, 0x30C($a0)
    ctx->pc = 0x28c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 780), GPR_U32(ctx, 17));
    // 0x28c4d4: 0xac820374  sw          $v0, 0x374($a0)
    ctx->pc = 0x28c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
    // 0x28c4d8: 0xac900378  sw          $s0, 0x378($a0)
    ctx->pc = 0x28c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 888), GPR_U32(ctx, 16));
    // 0x28c4dc: 0xac91037c  sw          $s1, 0x37C($a0)
    ctx->pc = 0x28c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 892), GPR_U32(ctx, 17));
    // 0x28c4e0: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x28C4E0u;
    {
        const bool branch_taken_0x28c4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4E0u;
            // 0x28c4e4: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4e0) {
            ctx->pc = 0x28C478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c478;
        }
    }
    ctx->pc = 0x28C4E8u;
label_28c4e8:
    // 0x28c4e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28C4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4F8u;
            // 0x28c4fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C500u;
}
