#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fptoui
// Address: 0x2892c0 - 0x289358
void fptoui_0x2892c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x2892c0");
#endif

    switch (ctx->pc) {
        case 0x2892d8u: goto label_2892d8;
        case 0x2892f0u: goto label_2892f0;
        default: break;
    }

    ctx->pc = 0x2892c0u;

    // 0x2892c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2892c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2892c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2892c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2892c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2892cc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2892ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2892d0: 0xc0a224c  jal         func_288930
    ctx->pc = 0x2892D0u;
    SET_GPR_U32(ctx, 31, 0x2892D8u);
    ctx->pc = 0x2892D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2892D0u;
            // 0x2892d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2892D8u; }
        if (ctx->pc != 0x2892D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2892D8u; }
        if (ctx->pc != 0x2892D8u) { return; }
    }
    ctx->pc = 0x2892D8u;
label_2892d8:
    // 0x2892d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2892d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2892dc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2892dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2892e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2892E0u;
    {
        const bool branch_taken_0x2892e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892E0u;
            // 0x2892e4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892e0) {
            ctx->pc = 0x2892F0u;
            goto label_2892f0;
        }
    }
    ctx->pc = 0x2892E8u;
    // 0x2892e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2892E8u;
    {
        const bool branch_taken_0x2892e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892E8u;
            // 0x2892ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892e8) {
            ctx->pc = 0x2892F8u;
            goto label_2892f8;
        }
    }
    ctx->pc = 0x2892F0u;
label_2892f0:
    // 0x2892f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2892F0u;
    {
        const bool branch_taken_0x2892f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892F0u;
            // 0x2892f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892f0) {
            ctx->pc = 0x28934Cu;
            goto label_28934c;
        }
    }
    ctx->pc = 0x2892F8u;
label_2892f8:
    // 0x2892f8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2892F8u;
    {
        const bool branch_taken_0x2892f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2892FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892F8u;
            // 0x2892fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892f8) {
            ctx->pc = 0x28934Cu;
            goto label_28934c;
        }
    }
    ctx->pc = 0x289300u;
    // 0x289300: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x289300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x289304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289304u;
    {
        const bool branch_taken_0x289304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289304u;
            // 0x289308: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289304) {
            ctx->pc = 0x28931Cu;
            goto label_28931c;
        }
    }
    ctx->pc = 0x28930Cu;
    // 0x28930c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28930Cu;
    {
        const bool branch_taken_0x28930c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x289310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28930Cu;
            // 0x289310: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28930c) {
            ctx->pc = 0x2892F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2892f0;
        }
    }
    ctx->pc = 0x289314u;
    // 0x289314: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x289314u;
    {
        const bool branch_taken_0x289314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289314) {
            ctx->pc = 0x289318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289314u;
            // 0x289318: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x289328u;
            goto label_289328;
        }
    }
    ctx->pc = 0x28931Cu;
label_28931c:
    // 0x28931c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289320: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x289320u;
    {
        const bool branch_taken_0x289320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289320u;
            // 0x289324: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289320) {
            ctx->pc = 0x28934Cu;
            goto label_28934c;
        }
    }
    ctx->pc = 0x289328u;
label_289328:
    // 0x289328: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x289328u;
    {
        const bool branch_taken_0x289328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289328) {
            ctx->pc = 0x28932Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289328u;
            // 0x28932c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289340u;
            goto label_289340;
        }
    }
    ctx->pc = 0x289330u;
    // 0x289330: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x289330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x289334: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x289334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x289338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289338u;
    {
        const bool branch_taken_0x289338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289338u;
            // 0x28933c: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289338) {
            ctx->pc = 0x28934Cu;
            goto label_28934c;
        }
    }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x289340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x289344: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x289344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x289348: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x289348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_28934c:
    // 0x28934c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289350: 0x3e00008  jr          $ra
    ctx->pc = 0x289350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289350u;
            // 0x289354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289358u;
}
