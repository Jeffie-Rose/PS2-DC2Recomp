#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _VERTEX_ANIME__FP9SPI_STACKi
// Address: 0x176900 - 0x17699c
void ps2__VERTEX_ANIME__FP9SPI_STACKi_0x176900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__VERTEX_ANIME__FP9SPI_STACKi_0x176900");
#endif

    switch (ctx->pc) {
        case 0x176928u: goto label_176928;
        case 0x176948u: goto label_176948;
        case 0x17696cu: goto label_17696c;
        default: break;
    }

    ctx->pc = 0x176900u;

    // 0x176900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17690c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17691c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x17691cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x176920: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x176920u;
    {
        const bool branch_taken_0x176920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176920u;
            // 0x176924: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176920) {
            ctx->pc = 0x17697Cu;
            goto label_17697c;
        }
    }
    ctx->pc = 0x176928u;
label_176928:
    // 0x176928: 0x8f8289d4  lw          $v0, -0x762C($gp)
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x17692c: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x17692cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x176930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176930u;
    {
        const bool branch_taken_0x176930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176930u;
            // 0x176934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176930) {
            ctx->pc = 0x176940u;
            goto label_176940;
        }
    }
    ctx->pc = 0x176938u;
    // 0x176938: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x176938u;
    {
        const bool branch_taken_0x176938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176938u;
            // 0x17693c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176938) {
            ctx->pc = 0x176984u;
            goto label_176984;
        }
    }
    ctx->pc = 0x176940u;
label_176940:
    // 0x176940: 0xc05191c  jal         func_146470
    ctx->pc = 0x176940u;
    SET_GPR_U32(ctx, 31, 0x176948u);
    ctx->pc = 0x176944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176940u;
            // 0x176944: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176948u; }
        if (ctx->pc != 0x176948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176948u; }
        if (ctx->pc != 0x176948u) { return; }
    }
    ctx->pc = 0x176948u;
label_176948:
    // 0x176948: 0x8f8389d4  lw          $v1, -0x762C($gp)
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x17694c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176950: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x176954: 0x244204e0  addiu       $v0, $v0, 0x4E0
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1248));
    // 0x176958: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x176958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17695c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17695cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176960: 0xaf8689d4  sw          $a2, -0x762C($gp)
    ctx->pc = 0x176960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937044), GPR_U32(ctx, 6));
    // 0x176964: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176964u;
    SET_GPR_U32(ctx, 31, 0x17696Cu);
    ctx->pc = 0x176968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176964u;
            // 0x176968: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17696Cu; }
        if (ctx->pc != 0x17696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17696Cu; }
        if (ctx->pc != 0x17696Cu) { return; }
    }
    ctx->pc = 0x17696Cu;
label_17696c:
    // 0x17696c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x176970: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x176970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x176974: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x176974u;
    {
        const bool branch_taken_0x176974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176974) {
            ctx->pc = 0x176928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176928;
        }
    }
    ctx->pc = 0x17697Cu;
label_17697c:
    // 0x17697c: 0x0  nop
    ctx->pc = 0x17697cu;
    // NOP
    // 0x176980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176984:
    // 0x176984: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17698c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17698cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176994: 0x3e00008  jr          $ra
    ctx->pc = 0x176994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176994u;
            // 0x176998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17699Cu;
}
