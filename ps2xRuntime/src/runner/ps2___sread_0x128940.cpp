#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sread
// Address: 0x128940 - 0x1289a4
void ps2___sread_0x128940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sread_0x128940");
#endif

    switch (ctx->pc) {
        case 0x128968u: goto label_128968;
        default: break;
    }

    ctx->pc = 0x128940u;

    // 0x128940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128944: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x128944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12894c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12894cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128958: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x128958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12895c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x128960: 0xc04a0f6  jal         func_1283D8
    ctx->pc = 0x128960u;
    SET_GPR_U32(ctx, 31, 0x128968u);
    ctx->pc = 0x128964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128960u;
            // 0x128964: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283D8u;
    if (runtime->hasFunction(0x1283D8u)) {
        auto targetFn = runtime->lookupFunction(0x1283D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128968u; }
        if (ctx->pc != 0x128968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _read_r_0x1283d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128968u; }
        if (ctx->pc != 0x128968u) { return; }
    }
    ctx->pc = 0x128968u;
label_128968:
    // 0x128968: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x128968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12896c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12896cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x128970: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128970u;
    {
        const bool branch_taken_0x128970 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x128970) {
            ctx->pc = 0x128974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128970u;
            // 0x128974: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128988u;
            goto label_128988;
        }
    }
    ctx->pc = 0x128978u;
    // 0x128978: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x128978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x12897c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x128980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128980u;
    {
        const bool branch_taken_0x128980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128980u;
            // 0x128984: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128980) {
            ctx->pc = 0x128990u;
            goto label_128990;
        }
    }
    ctx->pc = 0x128988u;
label_128988:
    // 0x128988: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x128988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x12898c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12898cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_128990:
    // 0x128990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128994: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x128994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12899c: 0x3e00008  jr          $ra
    ctx->pc = 0x12899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1289A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12899Cu;
            // 0x1289a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1289A4u;
}
