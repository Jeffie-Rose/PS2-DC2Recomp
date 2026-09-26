#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _outputFrame
// Address: 0x10bbd0 - 0x10bc60
void _outputFrame_0x10bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_outputFrame_0x10bbd0");
#endif

    switch (ctx->pc) {
        case 0x10bc10u: goto label_10bc10;
        case 0x10bc3cu: goto label_10bc3c;
        default: break;
    }

    ctx->pc = 0x10bbd0u;

    // 0x10bbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bbd4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10bbd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bbdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bbe0: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x10BBE0u;
    {
        const bool branch_taken_0x10bbe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBE0u;
            // 0x10bbe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbe0) {
            ctx->pc = 0x10BC3Cu;
            goto label_10bc3c;
        }
    }
    ctx->pc = 0x10BBE8u;
    // 0x10bbe8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x10bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10bbec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bbf0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BBF0u;
    {
        const bool branch_taken_0x10bbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBF0u;
            // 0x10bbf4: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbf0) {
            ctx->pc = 0x10BC18u;
            goto label_10bc18;
        }
    }
    ctx->pc = 0x10BBF8u;
    // 0x10bbf8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10BBF8u;
    {
        const bool branch_taken_0x10bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bbf8) {
            ctx->pc = 0x10BBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BBF8u;
            // 0x10bbfc: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BC04u;
            goto label_10bc04;
        }
    }
    ctx->pc = 0x10BC00u;
    // 0x10bc00: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x10bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_10bc04:
    // 0x10bc04: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x10bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10bc08: 0xc0430f8  jal         func_10C3E0
    ctx->pc = 0x10BC08u;
    SET_GPR_U32(ctx, 31, 0x10BC10u);
    ctx->pc = 0x10BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC08u;
            // 0x10bc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E0u;
    if (runtime->hasFunction(0x10C3E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC10u; }
        if (ctx->pc != 0x10BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x10c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC10u; }
        if (ctx->pc != 0x10BC10u) { return; }
    }
    ctx->pc = 0x10BC10u;
label_10bc10:
    // 0x10bc10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC10u;
            // 0x10bc14: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC40u;
            goto label_10bc40;
        }
    }
    ctx->pc = 0x10BC18u;
label_10bc18:
    // 0x10bc18: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BC18u;
    {
        const bool branch_taken_0x10bc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bc18) {
            ctx->pc = 0x10BC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC18u;
            // 0x10bc1c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BC2Cu;
            goto label_10bc2c;
        }
    }
    ctx->pc = 0x10BC20u;
    // 0x10bc20: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x10bc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10bc24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BC24u;
    {
        const bool branch_taken_0x10bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC24u;
            // 0x10bc28: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc24) {
            ctx->pc = 0x10BC30u;
            goto label_10bc30;
        }
    }
    ctx->pc = 0x10BC2Cu;
label_10bc2c:
    // 0x10bc2c: 0x8e0601d8  lw          $a2, 0x1D8($s0)
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_10bc30:
    // 0x10bc30: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10bc34: 0xc04313c  jal         func_10C4F0
    ctx->pc = 0x10BC34u;
    SET_GPR_U32(ctx, 31, 0x10BC3Cu);
    ctx->pc = 0x10BC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC34u;
            // 0x10bc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C4F0u;
    if (runtime->hasFunction(0x10C4F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC3Cu; }
        if (ctx->pc != 0x10BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x10c4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC3Cu; }
        if (ctx->pc != 0x10BC3Cu) { return; }
    }
    ctx->pc = 0x10BC3Cu;
label_10bc3c:
    // 0x10bc3c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_10bc40:
    // 0x10bc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bc44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BC44u;
    {
        const bool branch_taken_0x10bc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC44u;
            // 0x10bc48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc44) {
            ctx->pc = 0x10BC54u;
            goto label_10bc54;
        }
    }
    ctx->pc = 0x10BC4Cu;
    // 0x10bc4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10bc50: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x10bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_10bc54:
    // 0x10bc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x10BC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC58u;
            // 0x10bc5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BC60u;
}
