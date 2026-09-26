#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAttackVol__16MOS_CHANGE_PARAMFi
// Address: 0x19a8e0 - 0x19a97c
void GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0");
#endif

    switch (ctx->pc) {
        case 0x19a934u: goto label_19a934;
        case 0x19a954u: goto label_19a954;
        default: break;
    }

    ctx->pc = 0x19a8e0u;

    // 0x19a8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a8e8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A8E8u;
    {
        const bool branch_taken_0x19a8e8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8E8u;
            // 0x19a8ec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8e8) {
            ctx->pc = 0x19A8F8u;
            goto label_19a8f8;
        }
    }
    ctx->pc = 0x19A8F0u;
    // 0x19a8f0: 0x84850008  lh          $a1, 0x8($a0)
    ctx->pc = 0x19a8f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19a8f4: 0x0  nop
    ctx->pc = 0x19a8f4u;
    // NOP
label_19a8f8:
    // 0x19a8f8: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a8fc: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x19a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x19a900: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19a900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19a904: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19a908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a90c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x19a90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19a910: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a918: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a91c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19a91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19a920: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x19a920u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x19a924: 0x0  nop
    ctx->pc = 0x19a924u;
    // NOP
    // 0x19a928: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19a928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19a92c: 0xc066a24  jal         func_19A890
    ctx->pc = 0x19A92Cu;
    SET_GPR_U32(ctx, 31, 0x19A934u);
    ctx->pc = 0x19A930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A92Cu;
            // 0x19a930: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A890u;
    if (runtime->hasFunction(0x19A890u)) {
        auto targetFn = runtime->lookupFunction(0x19A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A934u; }
        if (ctx->pc != 0x19A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterHengeParam__Fi_0x19a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A934u; }
        if (ctx->pc != 0x19A934u) { return; }
    }
    ctx->pc = 0x19A934u;
label_19a934:
    // 0x19a934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A934u;
    {
        const bool branch_taken_0x19a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A934u;
            // 0x19a938: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a934) {
            ctx->pc = 0x19A958u;
            goto label_19a958;
        }
    }
    ctx->pc = 0x19A93Cu;
    // 0x19a93c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x19a93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19a940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a944: 0x0  nop
    ctx->pc = 0x19a944u;
    // NOP
    // 0x19a948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a94c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19A94Cu;
    SET_GPR_U32(ctx, 31, 0x19A954u);
    ctx->pc = 0x19A950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A94Cu;
            // 0x19a950: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A954u; }
        if (ctx->pc != 0x19A954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A954u; }
        if (ctx->pc != 0x19A954u) { return; }
    }
    ctx->pc = 0x19A954u;
label_19a954:
    // 0x19a954: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a958:
    // 0x19a958: 0x286103e8  slti        $at, $v1, 0x3E8
    ctx->pc = 0x19a958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19a95c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A95Cu;
    {
        const bool branch_taken_0x19a95c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a95c) {
            ctx->pc = 0x19A968u;
            goto label_19a968;
        }
    }
    ctx->pc = 0x19A964u;
    // 0x19a964: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_19a968:
    // 0x19a968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a96c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a970: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19a970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a974: 0x3e00008  jr          $ra
    ctx->pc = 0x19A974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A974u;
            // 0x19a978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A97Cu;
}
