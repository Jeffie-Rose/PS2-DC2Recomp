#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBitFlag__9CSaveDataFii
// Address: 0x2f63d0 - 0x2f6474
void SetBitFlag__9CSaveDataFii_0x2f63d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBitFlag__9CSaveDataFii_0x2f63d0");
#endif

    switch (ctx->pc) {
        case 0x2f63f4u: goto label_2f63f4;
        default: break;
    }

    ctx->pc = 0x2f63d0u;

    // 0x2f63d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f63d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f63d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f63d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f63d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f63dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f63dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f63e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f63e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f63e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f63e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f63e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63ec: 0xc0bd8ec  jal         func_2F63B0
    ctx->pc = 0x2F63ECu;
    SET_GPR_U32(ctx, 31, 0x2F63F4u);
    ctx->pc = 0x2F63F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63ECu;
            // 0x2f63f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63B0u;
    if (runtime->hasFunction(0x2F63B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F63F4u; }
        if (ctx->pc != 0x2F63F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagNo__9CSaveDataFi_0x2f63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F63F4u; }
        if (ctx->pc != 0x2F63F4u) { return; }
    }
    ctx->pc = 0x2F63F4u;
label_2f63f4:
    // 0x2f63f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F63F4u;
    {
        const bool branch_taken_0x2f63f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F63F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63F4u;
            // 0x2f63f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f4) {
            ctx->pc = 0x2F6404u;
            goto label_2f6404;
        }
    }
    ctx->pc = 0x2F63FCu;
    // 0x2f63fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F63FCu;
    {
        const bool branch_taken_0x2f63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63FCu;
            // 0x2f6400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63fc) {
            ctx->pc = 0x2F645Cu;
            goto label_2f645c;
        }
    }
    ctx->pc = 0x2F6404u;
label_2f6404:
    // 0x2f6404: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6404u;
    {
        const bool branch_taken_0x2f6404 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2F6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6404u;
            // 0x2f6408: 0x122143  sra         $a0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6404) {
            ctx->pc = 0x2F6414u;
            goto label_2f6414;
        }
    }
    ctx->pc = 0x2F640Cu;
    // 0x2f640c: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x2f640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x2f6410: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x2f6410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_2f6414:
    // 0x2f6414: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6414u;
    {
        const bool branch_taken_0x2f6414 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2F6418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6414u;
            // 0x2f6418: 0x3242001f  andi        $v0, $s2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6414) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F641Cu;
    // 0x2f641c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F641Cu;
    {
        const bool branch_taken_0x2f641c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f641c) {
            ctx->pc = 0x2F6428u;
            goto label_2f6428;
        }
    }
    ctx->pc = 0x2F6424u;
    // 0x2f6424: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2f6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_2f6428:
    // 0x2f6428: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2f6428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2f642c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f642cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f6430: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2f6430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f6434: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f6434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6438: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2f6438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f643c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F643Cu;
    {
        const bool branch_taken_0x2f643c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F643Cu;
            // 0x2f6440: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f643c) {
            ctx->pc = 0x2F6450u;
            goto label_2f6450;
        }
    }
    ctx->pc = 0x2F6444u;
    // 0x2f6444: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f6444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f6448: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6448u;
    {
        const bool branch_taken_0x2f6448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6448u;
            // 0x2f644c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6448) {
            ctx->pc = 0x2F645Cu;
            goto label_2f645c;
        }
    }
    ctx->pc = 0x2F6450u;
label_2f6450:
    // 0x2f6450: 0x601827  not         $v1, $v1
    ctx->pc = 0x2f6450u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x2f6454: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f6454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f6458: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f6458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2f645c:
    // 0x2f645c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f645cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6460: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f646c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F646Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F646Cu;
            // 0x2f6470: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6474u;
}
