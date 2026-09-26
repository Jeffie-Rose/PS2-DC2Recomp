#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChangeStep__10CEohMotherFif
// Address: 0x25e680 - 0x25e700
void SetChangeStep__10CEohMotherFif_0x25e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChangeStep__10CEohMotherFif_0x25e680");
#endif

    ctx->pc = 0x25e680u;

    // 0x25e680: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E680u;
    {
        const bool branch_taken_0x25e680 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E680u;
            // 0x25e684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e680) {
            ctx->pc = 0x25E698u;
            goto label_25e698;
        }
    }
    ctx->pc = 0x25E688u;
    // 0x25e688: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e68c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E68Cu;
    {
        const bool branch_taken_0x25e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E68Cu;
            // 0x25e690: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e68c) {
            ctx->pc = 0x25E6A0u;
            goto label_25e6a0;
        }
    }
    ctx->pc = 0x25E694u;
    // 0x25e694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e698:
    // 0x25e698: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25E698u;
    {
        const bool branch_taken_0x25e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e698) {
            ctx->pc = 0x25E6F8u;
            goto label_25e6f8;
        }
    }
    ctx->pc = 0x25E6A0u;
label_25e6a0:
    // 0x25e6a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e6a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E6A8u;
    {
        const bool branch_taken_0x25e6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e6a8) {
            ctx->pc = 0x25E6B8u;
            goto label_25e6b8;
        }
    }
    ctx->pc = 0x25E6B0u;
    // 0x25e6b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25E6B0u;
    {
        const bool branch_taken_0x25e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6B0u;
            // 0x25e6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6b0) {
            ctx->pc = 0x25E6ECu;
            goto label_25e6ec;
        }
    }
    ctx->pc = 0x25E6B8u;
label_25e6b8:
    // 0x25e6b8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x25e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25e6bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E6BCu;
    {
        const bool branch_taken_0x25e6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6BCu;
            // 0x25e6c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6bc) {
            ctx->pc = 0x25E6CCu;
            goto label_25e6cc;
        }
    }
    ctx->pc = 0x25E6C4u;
    // 0x25e6c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25E6C4u;
    {
        const bool branch_taken_0x25e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6C4u;
            // 0x25e6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6c4) {
            ctx->pc = 0x25E6F8u;
            goto label_25e6f8;
        }
    }
    ctx->pc = 0x25E6CCu;
label_25e6cc:
    // 0x25e6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e6d0: 0x0  nop
    ctx->pc = 0x25e6d0u;
    // NOP
    // 0x25e6d4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25e6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e6d8: 0x0  nop
    ctx->pc = 0x25e6d8u;
    // NOP
    // 0x25e6dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25E6DCu;
    {
        const bool branch_taken_0x25e6dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6DCu;
            // 0x25e6e0: 0xe46c050c  swc1        $f12, 0x50C($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6dc) {
            ctx->pc = 0x25E6F4u;
            goto label_25e6f4;
        }
    }
    ctx->pc = 0x25E6E4u;
    // 0x25e6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E6E4u;
    {
        const bool branch_taken_0x25e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E6E4u;
            // 0x25e6e8: 0xe4600508  swc1        $f0, 0x508($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e6e4) {
            ctx->pc = 0x25E6F4u;
            goto label_25e6f4;
        }
    }
    ctx->pc = 0x25E6ECu;
label_25e6ec:
    // 0x25e6ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25E6ECu;
    {
        const bool branch_taken_0x25e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e6ec) {
            ctx->pc = 0x25E6F8u;
            goto label_25e6f8;
        }
    }
    ctx->pc = 0x25E6F4u;
label_25e6f4:
    // 0x25e6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e6f8:
    // 0x25e6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x25E6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E700u;
}
