#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBBox__8mgCFrameFPfPf
// Address: 0x1365f0 - 0x1366e4
void SetBBox__8mgCFrameFPfPf_0x1365f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBBox__8mgCFrameFPfPf_0x1365f0");
#endif

    switch (ctx->pc) {
        case 0x136618u: goto label_136618;
        case 0x136628u: goto label_136628;
        case 0x136648u: goto label_136648;
        default: break;
    }

    ctx->pc = 0x1365f0u;

    // 0x1365f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1365f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1365f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1365f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1365f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1365f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1365fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1365fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136600: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136604: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x136604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x136608: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x136608u;
    {
        const bool branch_taken_0x136608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136608u;
            // 0x13660c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136608) {
            ctx->pc = 0x1366D0u;
            goto label_1366d0;
        }
    }
    ctx->pc = 0x136610u;
    // 0x136610: 0xc041c5c  jal         func_107170
    ctx->pc = 0x136610u;
    SET_GPR_U32(ctx, 31, 0x136618u);
    ctx->pc = 0x136614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136610u;
            // 0x136614: 0x24640080  addiu       $a0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136618u; }
        if (ctx->pc != 0x136618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136618u; }
        if (ctx->pc != 0x136618u) { return; }
    }
    ctx->pc = 0x136618u;
label_136618:
    // 0x136618: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x136618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13661c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136620: 0xc041c5c  jal         func_107170
    ctx->pc = 0x136620u;
    SET_GPR_U32(ctx, 31, 0x136628u);
    ctx->pc = 0x136624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136620u;
            // 0x136624: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136628u; }
        if (ctx->pc != 0x136628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136628u; }
        if (ctx->pc != 0x136628u) { return; }
    }
    ctx->pc = 0x136628u;
label_136628:
    // 0x136628: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13662c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136634: 0x24660090  addiu       $a2, $v1, 0x90
    ctx->pc = 0x136634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x136638: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x136638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x13663c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x136640: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x136640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x136644: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_136648:
    // 0x136648: 0x8e0a00f0  lw          $t2, 0xF0($s0)
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13664c: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x13664cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x136650: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x136650u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x136654: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x136658: 0x30860002  andi        $a2, $a0, 0x2
    ctx->pc = 0x136658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x13665c: 0xfd4821  addu        $t1, $a3, $sp
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x136660: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x136660u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x136664: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x136664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136668: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x136668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x13666c: 0x1453821  addu        $a3, $t2, $a1
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x136670: 0x30860004  andi        $a2, $a0, 0x4
    ctx->pc = 0x136670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x136674: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x136674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x136678: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x136678u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13667c: 0x8d2a0030  lw          $t2, 0x30($t1)
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x136680: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x136680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136684: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x136688: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13668c: 0x28860008  slti        $a2, $a0, 0x8
    ctx->pc = 0x13668cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x136690: 0x8e0900f0  lw          $t1, 0xF0($s0)
    ctx->pc = 0x136690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x136694: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x136694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136698: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x13669c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x13669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1366a0: 0x8d090030  lw          $t1, 0x30($t0)
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1366a4: 0x8e0800f0  lw          $t0, 0xF0($s0)
    ctx->pc = 0x1366a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1366a8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1366a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1366ac: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1366b0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x1366b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1366b4: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1366b8: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1366b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1366bc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1366bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1366c0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1366c4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1366c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1366c8: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1366C8u;
    {
        const bool branch_taken_0x1366c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1366CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366C8u;
            // 0x1366cc: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366c8) {
            ctx->pc = 0x136648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136648;
        }
    }
    ctx->pc = 0x1366D0u;
label_1366d0:
    // 0x1366d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1366d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1366d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1366d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1366d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1366d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1366dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1366DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1366E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366DCu;
            // 0x1366e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1366E4u;
}
