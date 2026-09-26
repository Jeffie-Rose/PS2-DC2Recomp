#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LevelUp__16MOS_CHANGE_PARAMFv
// Address: 0x19aaa0 - 0x19ab4c
void LevelUp__16MOS_CHANGE_PARAMFv_0x19aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LevelUp__16MOS_CHANGE_PARAMFv_0x19aaa0");
#endif

    switch (ctx->pc) {
        case 0x19aab8u: goto label_19aab8;
        default: break;
    }

    ctx->pc = 0x19aaa0u;

    // 0x19aaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19aaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19aaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19aaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aab0: 0xc065b24  jal         func_196C90
    ctx->pc = 0x19AAB0u;
    SET_GPR_U32(ctx, 31, 0x19AAB8u);
    ctx->pc = 0x19AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAB0u;
            // 0x19aab4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196C90u;
    if (runtime->hasFunction(0x196C90u)) {
        auto targetFn = runtime->lookupFunction(0x196C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAB8u; }
        if (ctx->pc != 0x19AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFill__11COMMON_GAGEFv_0x196c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAB8u; }
        if (ctx->pc != 0x19AAB8u) { return; }
    }
    ctx->pc = 0x19AAB8u;
label_19aab8:
    // 0x19aab8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19AAB8u;
    {
        const bool branch_taken_0x19aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAB8u;
            // 0x19aabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aab8) {
            ctx->pc = 0x19AB3Cu;
            goto label_19ab3c;
        }
    }
    ctx->pc = 0x19AAC0u;
    // 0x19aac0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x19aac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19aac4: 0x28410062  slti        $at, $v0, 0x62
    ctx->pc = 0x19aac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x19aac8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x19AAC8u;
    {
        const bool branch_taken_0x19aac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aac8) {
            ctx->pc = 0x19AB38u;
            goto label_19ab38;
        }
    }
    ctx->pc = 0x19AAD0u;
    // 0x19aad0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x19aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x19aad4: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19aad8: 0x28810032  slti        $at, $a0, 0x32
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x19aadc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AADCu;
    {
        const bool branch_taken_0x19aadc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AADCu;
            // 0x19aae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aadc) {
            ctx->pc = 0x19AAF8u;
            goto label_19aaf8;
        }
    }
    ctx->pc = 0x19AAE4u;
    // 0x19aae4: 0x2483ffcf  addiu       $v1, $a0, -0x31
    ctx->pc = 0x19aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
    // 0x19aae8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aaec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19aaf0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aaf4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x19aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19aaf8:
    // 0x19aaf8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19aafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ab04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19ab08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19ab0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ab10: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x19ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x19ab14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19ab18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ab18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab1c: 0x0  nop
    ctx->pc = 0x19ab1cu;
    // NOP
    // 0x19ab20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ab20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ab24: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x19ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x19ab28: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x19ab28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19ab2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ab30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19AB30u;
    {
        const bool branch_taken_0x19ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB30u;
            // 0x19ab34: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab30) {
            ctx->pc = 0x19AB3Cu;
            goto label_19ab3c;
        }
    }
    ctx->pc = 0x19AB38u;
label_19ab38:
    // 0x19ab38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ab38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ab3c:
    // 0x19ab3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ab40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ab40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab44: 0x3e00008  jr          $ra
    ctx->pc = 0x19AB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB44u;
            // 0x19ab48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AB4Cu;
}
