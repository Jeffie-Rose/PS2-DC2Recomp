#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sitofp
// Address: 0x289178 - 0x289230
void sitofp_0x289178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x289178");
#endif

    switch (ctx->pc) {
        case 0x2891f8u: goto label_2891f8;
        case 0x289224u: goto label_289224;
        default: break;
    }

    ctx->pc = 0x289178u;

    // 0x289178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28917c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289180: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x289184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289188: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x289188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28918c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28918Cu;
    {
        const bool branch_taken_0x28918c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x289190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28918Cu;
            // 0x289190: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28918c) {
            ctx->pc = 0x2891A0u;
            goto label_2891a0;
        }
    }
    ctx->pc = 0x289194u;
    // 0x289194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289198: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x289198u;
    {
        const bool branch_taken_0x289198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289198u;
            // 0x28919c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289198) {
            ctx->pc = 0x28921Cu;
            goto label_28921c;
        }
    }
    ctx->pc = 0x2891A0u;
label_2891a0:
    // 0x2891a0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2891a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2891A4u;
    {
        const bool branch_taken_0x2891a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891A4u;
            // 0x2891a8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891a4) {
            ctx->pc = 0x2891D0u;
            goto label_2891d0;
        }
    }
    ctx->pc = 0x2891ACu;
    // 0x2891ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2891acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2891b0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2891B0u;
    {
        const bool branch_taken_0x2891b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2891B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891B0u;
            // 0x2891b4: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891b0) {
            ctx->pc = 0x2891C8u;
            goto label_2891c8;
        }
    }
    ctx->pc = 0x2891B8u;
    // 0x2891b8: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x2891b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x2891bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2891bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2891c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2891C0u;
    {
        const bool branch_taken_0x2891c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891C0u;
            // 0x2891c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891c0) {
            ctx->pc = 0x289228u;
            goto label_289228;
        }
    }
    ctx->pc = 0x2891C8u;
label_2891c8:
    // 0x2891c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2891C8u;
    {
        const bool branch_taken_0x2891c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891C8u;
            // 0x2891cc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891c8) {
            ctx->pc = 0x2891D4u;
            goto label_2891d4;
        }
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2891d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_2891d4:
    // 0x2891d4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2891d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2891d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2891dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2891dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2891e0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2891e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2891e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2891E4u;
    {
        const bool branch_taken_0x2891e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2891E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891E4u;
            // 0x2891e8: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891e4) {
            ctx->pc = 0x28921Cu;
            goto label_28921c;
        }
    }
    ctx->pc = 0x2891ECu;
    // 0x2891ec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2891ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2891f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2891f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2891f4: 0x0  nop
    ctx->pc = 0x2891f4u;
    // NOP
label_2891f8:
    // 0x2891f8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2891f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2891fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2891fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289200: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x289200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289204: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x289204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289208: 0x0  nop
    ctx->pc = 0x289208u;
    // NOP
    // 0x28920c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28920Cu;
    {
        const bool branch_taken_0x28920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28920c) {
            ctx->pc = 0x2891F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2891f8;
        }
    }
    ctx->pc = 0x289214u;
    // 0x289214: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x289214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x289218: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x289218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_28921c:
    // 0x28921c: 0xc0a2208  jal         func_288820
    ctx->pc = 0x28921Cu;
    SET_GPR_U32(ctx, 31, 0x289224u);
    ctx->pc = 0x289220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28921Cu;
            // 0x289220: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288820u;
    if (runtime->hasFunction(0x288820u)) {
        auto targetFn = runtime->lookupFunction(0x288820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289224u; }
        if (ctx->pc != 0x289224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x288820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289224u; }
        if (ctx->pc != 0x289224u) { return; }
    }
    ctx->pc = 0x289224u;
label_289224:
    // 0x289224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_289228:
    // 0x289228: 0x3e00008  jr          $ra
    ctx->pc = 0x289228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289228u;
            // 0x28922c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289230u;
}
